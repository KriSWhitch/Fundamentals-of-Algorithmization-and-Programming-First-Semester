
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <time.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

void train() {
	float a, * pa, s = 0; int i;
	pa = &a;
	for (i = 1; i <= 4; i++)
	{
		cout << "a=";
		cin >> a;
		s += *pa;
	}
	cout << s;
}

int first()
{
	int a[1000], i, n, j, temp = 0;
	printf("Введите количество элементов массива: ");
	scanf_s("%d", &n);
	printf("Введите элементы массива: \n");
	for (i = 0; i < n; i++)
	{
		printf("Элемент номер %d = ", i + 1);
		scanf_s("%d", &a[i]);
	}
	for (j = 0; j < n; j++)
	{
		for (i = 0; i < n - 1; i++)
		{
			if (a[i] < a[i + 1])
			{
				temp = a[i];
				a[i] = a[i + 1];
				a[i + 1] = temp;
			}
		}
	}
	for (i = 0; i < n; i++)
	{
		printf(" %d", a[i]);
	}
	
	return(0);
}


void second() {
	int i, k, n, j, size;
	float  q, sum;
	int x[500],y[500];
	cout << "Введите число q = ";
	cin >> q;

	printf("Введите количество элементов массива x: ");
	scanf_s("%d", &k);
	printf("Введите элементы массива x: \n");
	for (i = 0; i < k; i++)
	{
		printf("Элемент номер %d = ", i + 1);
		scanf_s("%d", &x[i]);
	}

	printf("Введите количество элементов массива y: ");
	scanf_s("%d", &n);
	printf("Введите элементы массива y: \n");
	for (i = 0; i < n; i++)
	{
		printf("Элемент номер %d = ", i + 1);
		scanf_s("%d", &y[i]);
	}
	
	if (k > n) size = k;
	else size = n;

	sum = x[0] + y[1];
	for (i = 0; i < size - 1; i++)
	{
		for ( j = i + 1; j < size; j++)
			if ((x[i] + y[j]) <= q && (x[i] + y[j]) > sum)
				sum = x[i] + y[j];
	}
	cout << "Ближайшая сумма элементов будет равна = " << sum;
}


// Ввести целое число N. Выделить из этого числа цифры,кратные 3.Записать их в одномерный массив
void dop1() {
	int a[50];
	int i, N, k, x;
	cout << "Введите N = ";
	cin >> N;
	k = 0;
	do
	{
		x = N % 10;   //Выделение последней цифры
		N = N / 10;   //Исходное число без последней цифры
		if (x % 3 == 0)  //Проверка на кратность 3-м
		{
			a[k] = x;      //Запись в массив
			k++;
		}
	} while (N > 0);
	//Вывод
	printf("Result: \n");
	for (i = 0; i < k; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");
 }

void dop2() {
	const int n = 5;
	int A[n] = { 1, 2, 3, 4, 5 };
	int B[n] = { 1, 2, 3, 4, 5 };
	int S[n];
	printf("Array S:\n");
	for (int i = 0; i < n; ++i)
	{
		S[i] = A[i] + B[i];
		printf("S[%u] = %d \n", i, S[i]);
	}
}

int dop3() {
	int t, s1(0), s2(0);
	cout << "t="; cin >> t;
	int* a = new int[5];
	int* b = new int[5];
	cout << "заполните массив A \n";
	for (int i = 0; i < 5; i++)
	{
		cout << "a[" << i << "]="; cin >> a[i];
	}
	cout << "заполните массив B \n";
	for (int i = 0; i < 5; i++)
	{
		cout << "b[" << i << "]="; cin >> b[i];
	}

	for (int i = 0; i < 5; i++)
	{
		if (a[i] < t) s1++;
		if (b[i] < t) s2++;
	}
	cout << "В массиве A --" << s1 << "-- элемента(элементов) меньше " << t << "\n";
	cout << "В массиве B --" << s2 << "-- элемента(элементов) меньше " << t << "\n";
	if (s1 < s2)
	{
		for (int i = 0; i < 5; i++) //элементы массива B
			cout << b[i] << " ";
		cout << endl;
		for (int i = 0; i < 5; i++)
			cout << a[i] << " ";
		cout << endl;
	}
	else {
		for (int i = 0; i < 5; i++) //элементы массива A
			cout << a[i] << " ";
		cout << endl;
		for (int i = 0; i < 5; i++)
			cout << b[i] << " ";
		cout << endl;
	}
	return 0;
}


int main()
{
	setlocale(LC_ALL, "Russian");
	//train();
	first();
	second();
	dop1();
	dop2();
	dop3();
}
