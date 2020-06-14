
#include <iostream>
using namespace std;



int second() {
	string str("Привет мир ,\'как твои дела?\' , что нового?");
	auto i1 = str.find('\'');
	auto i2 = str.find('\'', i1 + 1);
	str.erase(i1 + 1, i2 - i1 - 1);
	cout << str << endl;
	return 0;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	second();
}
