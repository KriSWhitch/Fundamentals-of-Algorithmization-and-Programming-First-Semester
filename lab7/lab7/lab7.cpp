#include <iostream>
#include<math.h>
#include<iomanip>
#include <stdlib.h>
# include <conio.h>
using namespace std;

int factorial(int N)
{
	int F = 1;
	for (int i = 1; i <= N; ++i)
	{
		F *= i; 
	}
	return F; 
}

void train1() {
	int N;
	cout << "N = "; cin >> N;
	if (N >= 0)
	{
		cout << "Факториал числа " << N << " равен " << factorial(N);
	}
	else {
		cout << "Error: N<0";
	}
}

void first() {
	double t = 0.45, x1 = 1.1, x2 = 6.2, x3 = 3, x4 = -4, x5 = 6, x6 = 1, q;
	q = t + ((x1 + 1) / x1) + ((x2 + 1) / x2) + ((x3 + 1) / x3) + ((x4 + 1) / x4) +
		((x5 + 1) / x5) + ((x6 + 1) / x6);
	printf_s("q =%6.3f",q);
}

void second() {
	double p, q, y1=3, y2=-2, y3=0.9, y4=0.5, y5=1;
	int i = 1, n, fac;
		y1 < y2 && y1 < y3 && y1 < y4 && y1 < y5 ? p = y1 :
		y2 < y1 && y2 < y3 && y2 < y4 && y2 < y5 ? p = y2 :
		y3 < y1 && y3 < y2 && y3 < y4 && y3 < y5 ? p = y3 :
		y4 < y2 && y4 < y3 && y4 < y1 && y4 < y5 ? p = y4 :
		y5 < y2 && y5 < y3 && y5 < y4 && y5 < y1 ? p = y5 : printf("Неккоректный ввод");
		printf("p =%5.2f\n", p);
		cout << "Введите N(факториал числа): "; cin >> n;
		fac = factorial(n);
		for (i; i <= 5; i++) {
			if (i == 1) q = fac * (y1 - 5) + p;
			else if (i == 2) q = fac * (y2 - 5) + p;
			else if (i == 3) q = fac * (y2 - 5) + p;
			else if (i == 4) q = fac * (y4 - 5) + p;
			else if (i == 5) q = fac * (y5 - 5) + p;
			
			if (i == 1) printf("При использовании y1, q=%5.2f\n", q);
			else if (i == 2) printf("При использовании y2, q=%5.2f\n", q);
			else if (i == 3) printf("При использовании y3, q=%5.2f\n", q);
			else if (i == 4) printf("При использовании y4, q=%5.2f\n", q);
			else if (i == 5) printf("При использовании y5, q=%5.2f\n", q);
		}


}

void third() {
	double sum = 0, tmp, n = 6, x1 = 3, x2 = -2, x3 = 0.7, x4 = -1, x5 = -2, x6 = 7,
		y1 = 1, y2 = 5, y3 = -1.2, y4 = 6, y5 = 9, y6 = -4;
	
	for (int i = 1; i <= n; i++){
		if (i == 1) tmp = x1 * y1;
		else if (i == 2) tmp = x2 * y2;
		else if (i == 3) tmp = x3 * y3;
		else if (i == 4) tmp = x4 * y4;
		else if (i == 5) tmp = x5 * y5;
		else if (i == 6) tmp = x6 * y6;
		sum += tmp;
	}
	printf("sum =%7.3f\n", sum);
}

void dop1() {
	int num; // размер массива
	cout << "Введите количество элементов в массива(начиная отсчёт от нуля) ";
	cin >> num; // получение размера массива
	int* mass = new int[num]; // Выделение памяти для массива
	for (int i = 0; i < num; i++) {
		// Заполнение массива
		mass[i] = i;
	}
	int sum = 0;
	for (int i = 0; i < num; i++) {
		// Подсчет суммы четных элементов
		if (mass[i] % 2 == 0)
		{
			sum += mass[i];
		}
	}
	cout << "Сумма четных элементов массива равна: " << sum << endl;
}

void dop2() {
	
	int n, neg, a, k = 0;
	neg = 0;
	cout << "Введите количество элементов последовательности" << endl;
	cin >> n;
	cout << "Введите посследовательность из " << n << " чисел" << endl;
	for (int i = 1; i <= n; i++)
	{
		cin >> a;
		if (a < 0 && k == 0)
		{
			neg = i;
			k = 1; // позволяет не учитывать последующие элементы, вместо прерывания
		}
	}
	if (neg != 0)
		cout << "Номер первого отрицательного числа - №" << neg << endl;
	if (neg == 0)
		cout << "В последовательности нет отрицательных чисел" << endl;
}

void dop3() {
	int n, i, sum = 0, k=0;
	cout << "Размер массива = ";
	cin >> n;
	int* a = new int[n];
	cout << "Введите целые числа: " << endl;
	for (i = 0; i < n; i++)
	{
		cin >> a[i]; // заполнение элементов массива
		k += 1;
	}
	for (i = 0; i < n; i++)
	{
		sum += a[i]; 
	}
	sum /= k; // подсчёт среднего арифметического
	cout << "\nСреднее арифметическое чисел = " << sum << endl;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	//train1();
	//first();
	//second();
	//third();
	//dop1();
	//dop2();
	dop3();
    
}