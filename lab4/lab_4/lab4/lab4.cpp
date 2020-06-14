#include <iostream>
#include <math.h>
#include <iomanip> 
#include <stdio.h>
#include <conio.h>

using namespace std;


void first()
{
	double x, y, z, sum, product, min1, min2, total;
	cout << "Значения переменных должны различаться!" << endl;
	cout << "Введите значение переменной x: "; cin >> x;
	cout << "Введите значение переменной y: "; cin >> y;
	cout << "Введите значение переменной z: "; cin >> z;
	sum = x + y + z;
	product = x * y * z;
	if (sum > product)
		min1 = product;
	else
		min1 = sum;
	
	if (x < y && x < z)
		min2 = z;
	else if (y < x && y < z)
		min2 = y;
	else if (z < x && z < y)
		min2 = z;
	total = min1 * min2;
	cout << "Ответ: " << total << endl;

	int a, b, c , d;
	cout << "Есть ли среди заданных значений чётные числа?" << endl;
	cout << "Введите значение переменной a: "; cin >> a;
	cout << "Введите значение переменной b: "; cin >> b;
	cout << "Введите значение переменной c: "; cin >> c;
	cout << "Введите значение переменной d: "; cin >> d;
	a = a % 2;
	b = b % 2;
	c = c % 2;
	d = d % 2;

	if (a == 0 || b == 0 || c == 0 || d == 0)
		cout << "Среди этих чисел есть хотя бы одно чётное" << endl;
	else
		cout << "Среди этих чисел нет ни одного чётного" << endl;

	int k;
	puts("Привет, как дела? (1-Хорошо, 2-Нормально, 3-Плохо)");
	cin >> k;
	switch (k)
	{
	case 1: puts("У меня тоже всё хорошо");
	case 2: puts("Нуу, слишком типичный ответ");
	case 3: puts("А у меня хорошо!");
	}
}


void second()
{
	int r, p, q, a;
	cout << "Введите значение переменной r: ";
	cin >> r;
	cout << "Введите значение переменной p: ";
	cin >> p;
	cout << "Введите значение переменной q: ";
	cin >> q;
	a = sqrt(p * p + q * q) / 2;

	if (r <= p * q / 4 / a)
		cout << "Пройдёт";
	else
		cout << "Не пройдёт";
}


void third()
{

	int a, b, c, r, s, t;
	cout << "Размеры коробки:" << endl;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	cout << "Размеры посылки:" << endl;
	cout << "r= ";
	cin >> r;
	cout << "s= ";
	cin >> s;
	cout << "t= ";
	cin >> t;
	if (
		(a < r && b < s && c < t) ||
		(a < r && b < t && c < s) ||
		(a < s && b < r && c < t) ||
		(a < s && b < t && c < r) ||
		(a < t && b < s && c < r) ||
		(a < t && b < r && c < s))
		cout << "Да" << endl;
	else
		cout << "Нет" << endl;


}


int fourth() {
	int a = 0, b = 0;
	char operation;

	cout << "Введите первое число a: ";
	cin >> a;
	cout << "Введите второе число b: ";
	cin >> b;
	cout << "Выберите операцию: ";
	cin >> operation;

	switch (operation) {
	case '-':
		cout << "a - b = " << a - b << endl;
		break;
	case '+':
		cout << "a + b = " << a + b << endl;
		break;
	case '*':
		cout << "a * b = " << a * b << endl;
		break;
	case '/':
		cout << "a / b = " << a / b << endl;
		break;
	default:
		cout << "Ошибка" << endl;
	}
	return 0;
}




void main()
{
	setlocale(LC_ALL, "Russian");
	//first();
	//second();
	//third();
	fourth();
}
