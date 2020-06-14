#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstring>
#include<conio.h>
#include <regex>
#include <cstdlib>
#include <algorithm>
#include <sstream>
#include <string>
#include <memory.h>
#include <string.h>
#include <vector>

using namespace std;


char* del_char(char* s, char* temp, char c) {
	char* p = temp;
	int i = 0, j = 0;
	while (s[i] != '\0') {
		if (s[i] != c) p[j++] = s[i];
		i++;
	}
	p[j] = '\0';
	return p;
}

void first() {
	int n = 100;
	char s[255];

	
	cout << "Введите строку: " << endl;
	cin.getline(s, n);
	cout << s << endl;
	char d;
	cout << "Введите символ: "; cin >> d;
	int count = 0;
	char* r; 
	for (r = s; r = strchr(r, d); 
	r += sizeof(d))++count;
	unsigned int tmp_len = strlen(s) - sizeof(d) * count + 1;
	char tmp[255];

	del_char(s, tmp, d);
	cout << tmp << endl;
}

char* insert(char* str, const char* spos, int pos) {
	int len = strlen(str);
	int cnt = strlen(spos);
	memmove(str + pos + cnt, str + pos, len + cnt);
	strncpy(str + pos, spos, cnt);
	return str;
}


void second()
{
	char str[64];
	strcpy(str, "Lesha don't understand mathematic.");
	puts(insert(str, "-kun", 5));
}


typedef string         T_str;
typedef vector<T_str>  T_strings;

void  print_unique_words(const T_str& s)
{
	istringstream  ssin(s);
	istream_iterator<string>  ssin_beg(ssin), ssin_end;
	T_strings  words;
	copy(ssin_beg, ssin_end, back_inserter(words));

	for (T_strings::iterator word_it = words.begin(); word_it != words.end(); )
	{
		T_strings::iterator  find_word_it
			= find(word_it + 1, words.end(), *word_it);
		if (find_word_it != words.end())
		{
			words.erase(find_word_it);
		}
		else
		{
			++word_it;
		}
	}

	copy(words.begin(), words.end(),
		ostream_iterator<string>(cout, " "));
}

void dop1() {
	
	cout << "Введите предложение с повторяющимися словами: "
		<< endl;
	T_str  s;
	getline(cin, s);
	cout << "Предложение с удаленными дублями слов:"
		<< endl;
	print_unique_words(s);
	cout << endl;
    
}

void dop2() {
	string str;
	cout << "Введите текст\n";
	getline(cin, str);
	string tmp;
	istringstream ist(str);
	vector<string> vc;
	while (ist >> tmp)
	{
		if (tmp.size() % 2 != 0)
			tmp.clear();
		else
		{
					reverse(tmp.begin(), tmp.end());
			vc.push_back(tmp);
		}
	}
	for (vector<string>::iterator it = vc.begin(); it != vc.end(); ++it)
		cout << *it << ' ';
	cout << '\n';
}

template< class InputIt, class UnaryPredicate >
bool all_of_(InputIt first, InputIt last, UnaryPredicate p)
{
	for (; first != last; ++first) {
		if (!p(*first)) return false;
	}
	return true;
}

void dop3() {
	string s = "789 Use Class Hier2archy or Alphabetical 123 List or Com3pound List to find 7852 the cla2ss you are int2erested in";
	istringstream iss(s);
	vector<string> words((istream_iterator<string>(iss)), istream_iterator<string>());
	vector<string>::iterator last = partition(words.begin(), words.end(), [](const string& s) {
		return all_of_(s.begin(), s.end(), isdigit);
		});
	partition(last, words.end(), [](const string& s) {
		return all_of_(s.begin(), s.end(), isalpha);
		});

	copy(words.begin(), words.end(), ostream_iterator<string>(cout, " "));

	cout << "\n\n";
}

int main()
{
	setlocale(LC_ALL, "Russian");
	first();
	//second();
	//dop1();
	//dop2();
	//dop3();
}

