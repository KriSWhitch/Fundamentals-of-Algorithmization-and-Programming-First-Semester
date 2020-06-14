#include <iostream>
#include <random>
#include <stdio.h>
#include <ctime>
#include <time.h> 
#include <cmath>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;



/*Проверить, все ли столбцы матрицы содержат хотя бы один положительный элемент. 
Если нет, то в первом столбце, не удовлетворяющем условию, заменить отрицательные элементы их модулями.*/

void first() {
	srand(time(NULL));
	int i, j;
	int** matrix;
	int n = 5;
	int m = 6;
	bool have = false;
	bool flag = true;
	matrix = new int* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];

	printf("\nСгенерированная матрица:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			matrix[i][j] = rand() % 30 - 25;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nРезультат:\n");
	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			if (matrix[i][j] >= 0) {
				have = true;
				break;
			}

		}

		if (flag == true && have == false) {
			for (i = 0; i < n; i++) {
				matrix[i][j] = abs(matrix[i][j]);
			}
			flag = false;
		}
		else if (have == true && flag == false) {
			continue;
		}

		have = false;
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	delete[]matrix;

}



/*Написать функцию для перевода чисел из десятичной системы счис-ления в двоичную. 
С помощью этой функции перевести различные числа из десятичной системы счисления в двоичную.*/


int Expression(int n) {
	for (unsigned int mask = 1 << 31; mask; mask >>= 1) {
		if (n >= mask || mask == 1) {
			cout << (n & mask ? 1 : 0);
		}
	}
	cout << endl;
	return 0;
}

void second() {
	setlocale(LC_ALL, "Russian");
	unsigned int n = 1;
	while (n != 0) {
		cout << "Введите число, если хотите завершить программу введите 0: ";
		cin >> n;
		Expression(n);

	}
}


/*Проверить, все ли строки матрицы содержат хотя бы один отрицательный элемент Если да, то изме-нить знаки всех элементов матрицы на обратные.*/

void dop1() {
	srand(time(NULL));
	int i, j;
	int** matrix;
	int n = 5;
	int m = 6;
	bool have = true;
	bool flag = true;
	matrix = new int* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];

	printf("\nСгенерированная матрица:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			matrix[i][j] = rand() % 30 - 25;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nРезультат:\n");

reverse:
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (flag == false) {
				if (matrix[i][j] != 0) {
					matrix[i][j] = matrix[i][j] * (-1);
				}
			}
			else if (matrix[i][j] < 0 && flag == true) {
				flag = false;
				goto reverse;
			}
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	delete[]matrix;
}


/*Выяснить, есть ли во введенном тексте слова, начинающиеся с буквы А, и сколько таких слов. С помощью этой функции проверить несколько строк.*/

void dop2() {
		string buf, wrd; // две переменные типа string
		size_t cnt; // счётчик
		const char TO_FIND = 'A'; // буква для поиска

		cout << "String: ";
		getline(cin, buf); // чтение строки в переменную buf
		istringstream ist(buf); // объект класса istringstream
		cnt = 0;
		while (ist >> wrd) // пока из потока ist выдаётся слово
			if (toupper(*wrd.begin()) == TO_FIND) // если первая его буква переведённая в верхний регистр совпадает с тем, что ищем
				++cnt; // увеличить счётчик
		cout << cnt << " words starting with '" << TO_FIND << "'." << endl; // вывести результат
}


/*Дана целочисленная прямоугольная матрица. Определить номер первого из столбцов, содержащих хотя бы один нулевой элемент.*/

void dop3() {
	srand(time(NULL));
	int i, j;
	int** matrix;
	int n = 5;
	int m = 6;
	int value = -1;
	matrix = new int* [n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];

	printf("\nСгенерированная матрица:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			matrix[i][j] = rand() % 10 - 5;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nРезультат: ");

	for (j = 0; j < m; j++) {
		for (i = 0; i < n; i++) {
			if (matrix[i][j] == 0) {
				value = j;
				goto answer;
			}
		}
	}
answer:
	if (value != 0) {
		cout << value + 1 << endl;
	}
	else {
		cout << "В матрице нет нулей." << endl;
	}
}

int main() {
	setlocale(LC_ALL, "Russian");
	//first();
	//second();
	//dop1();
	dop2();
	//dop3();
}