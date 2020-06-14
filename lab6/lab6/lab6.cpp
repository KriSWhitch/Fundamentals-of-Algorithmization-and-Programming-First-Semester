#include <iostream>
#include <stdio.h>
#include <math.h>
#include <cmath>

using namespace std;

void primary_1(){
	double x = -4e-3, s = 1.1, j=4, b, z;
	while (j <= 7) {
		b = 12 * s - exp(-s / 2) * (x - j);
		if (b < 1.5) {
			z = sqrt(-2 * x * j) + b;
		}
		else {
			z = abs(13 * x * j) + b;
		}
		
		printf("b = %f" "\t", b);
		printf("z = %5.3f" "\n", z);
		j = j + 0.5;
	}
}

void primary_2()
{

	float q, b;
	int buff, mass[100] = { 0 }, sum = 0;
	int k = 0;
	int t = 0;
	float i = 0;
	cout << "Введите b и q" << endl;
	cin >> b >> q;

	for (i = 0; i < q; i++)
	{
		buff = pow(i, 2);
		while (buff > 0)
		{
			{mass[t] = buff % 10; t++; }
			buff = buff / 10;
			k++;
		}

		for (int j = 0; j < k; j++) sum = mass[j] + sum;
		if (sum == b)
		{
			cout << "Число - " << i;
			cout << endl;
		}
		for (int i = 0; i < 100; i++) mass[i] = 0;
		t = 0; k = 0; sum = 0;
	}

}

int first()
{
	int n, div = 2;
	cout << "N = ";
	cin >> n;
	cout << n << " = ";
	while (n > 1) {
		int k = 0;
		while (n % div == 0) {
			k++;
			n = n / div;
		}
		if (k > 0) {
			cout << div;
			if (k > 1) cout << "^" << k;
			if (n > 1) cout << "*";
		}
		if (div == 2) div++;
		else div += 2;
	}
	cout << endl;
	cin.get(); cin.get();
	return 0;
}

void second() {
	double sa = 0, sb = 0, sc = 0, x = 0, n;
	int i;
	cout << "Введите n: "; cin >> n;
	for (i = 1; i <= 100; i++) {
		x = n * sin((double)n);
		if (i >= 10 && i < 100) sa += x;
		if (x > 0) sb += x;
		if (x < 0.5) sc += x;
	}
	printf("a=%f\nb=%f\nc=%f\n", sa, sb, sc);

}

void third() {
	int i;
	for (i = 1000; i <= 9999; i++) {
		if ((i % 2 == 0) & (i % 7 == 0) & (i % 11 == 0) & (i % 10 + (i / 10) % 10 + (i / 100) % 10 + i / 1000 == 30))
			cout << "i = " << i << endl;
	}
}




int main()
{
	setlocale(LC_ALL, "Russian");
	//primary_1();
	//primary_2();
	//first();
	//second();
	third();
}

