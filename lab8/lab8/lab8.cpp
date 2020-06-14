
#include <iostream>
#include <cmath>
using namespace std;

void first() {
	double  h, a = 2, b=7, n=200, s1, s2, x ,i=1, z;
	h = (b - a) / (2*n);
	x = a + 2 * h; s1 = 0; s2 = 0;
	do{
	s2 = s2 + pow(sin(x), 2);
	x = x + h;
	s1 = s1 + pow(sin(x), 2);
	x = x + h;
	i = i + 1;
	} while (i < n);
		z = h / 3 * (pow(sin(a), 2) + 4 * pow(sin(x + h), 2) + 4 * s1 + 2 * s2 + pow(sin(b), 2));
	cout << "z = " << z;

}

void second() {
	double  h, a = 2, b = 7, n = 200, s, x;
	h = (b - a) / n;
	x = a; s = 0;
	do {
	s = s + h * (pow(sin(x), 2) + 1 + (pow(sin(x), 2) + 1 + h)) / 2;
	x = x + h;
	} while (x > (b - h));
	cout << "x = " << x;

}

double f(double x)
{
	return sin(x) + 2 + x;
}


void third() {
	double x, a, b, e = 0.0001;
	
	cout << "Введите a и b - " << endl; cin >> a >> b;
	do {
	x = (a + b) / 2;
	if ((f(x)*f(a) < 0)) {
		b = x;
	}
	else {
		a = x;
	}
	} while (b - a > e);
	cout << "x = " << (a+b)/2;
}



void fourth() {
	
}

void dop1() {
	double  h, a = 0, b = 4, n = 200, s, x;
	h = (b - a) / n;
	x = a; s = 0;
	do {
	s = s + h * ((pow(x, 2) + 1/x) + ((pow(x, 2) + 1 / x) + h)) / 2;
	x = x + h;
	} while (x > (b - h));
	cout << "x = " << x;
}

void dop2() {
	double  h, a = 1, b=3, n=200, s1, s2, x ,i=1, z;
	h = (b - a) / (2*n);
	x = a + 2 * h; s1 = 0; s2 = 0;
	do{
	s2 = s2 + (pow(sin(x), 3)-3);
	x = x + h;
	s1 = s1 + (pow(sin(x), 3) - 3);
	x = x + h;
	i = i + 1;
	} while (i < n);
		z = h / 3 * (pow(sin(a), 2) + 4 * pow(sin(x + h), 2) + 4 * s1 + 2 * s2 + pow(sin(b), 2));
	cout << "z = " << z;
}

double y(double x)
{
	return pow(x,2)+1/x;
}

void dop3() {
	double x, a, b, e = 0.0001;
	
	cout << "Введите a и b - " << endl; cin >> a >> b;
	do {
	x = (a + b) / 2;
	if ((y(x)*y(a) < 0)) {
		b = x;
	}
	else {
		a = x;
	}
	} while (b - a > e);
	cout << "x = " << (a+b)/2;
}

int main()
{
	setlocale(LC_ALL, "Russian");
	first();
	//second();
	//third();
	//fourth();
	//dop1();
	//dop2();
	//dop3();
}

