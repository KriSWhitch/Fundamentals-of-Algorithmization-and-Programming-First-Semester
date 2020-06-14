#include <iostream>
#include "methods.h"
#include <chrono>

using namespace std;

double Expression(double x);
double DerivedExpression(double x);
double TrapezoidMethod(double a, double b, double n, double (*exx)(double x));
double ParabolaMethod(double a, double b, double n, double(*foo)(double x));
double DichotomyMethod(double a, double b, double eps, double(*fo)(double x));
double TangentMethod(double a, double b, double eps, double(*pf)(double x), double(*pfsh)(double x));

// условие ( интегралы)
double Expression(double x)
{
	return ((x * x * x) - 3);
}

// производная от условия ( интегралы)
double DerivedExpression(double x)
{
	return (3 * x * x);
}



int main() 
{
	setlocale(LC_CTYPE, "Russian");
	double a = 0, b = 0, n = 0;
	double z = 0;
	double eps = 10e-3L;
	cout << "Введите a, b, n: " << endl; 
	cin >> a >> b >> n;
	short k;
	do {
		z = 0;
		cout << "Введите каким методом будем считать интеграл" << endl;
		cout << "1 - методом трапеций" << endl;
		cout << "2 - методом парабол" << endl;
		cout << "3 - нахождение корня методом дихотомии" << endl;
		cout << "4 - нахождение корня методом касательных" << endl;
		cin >> k;
		auto start = chrono::high_resolution_clock::now();
		switch (k) {
			case 1: cout << "Result = " << TrapezoidMethod(a, b, n, Expression) << endl; break;
			case 2: cout << "Result = " << ParabolaMethod(a, b, n, Expression) << endl; break;
			case 3: cout << "Result = " << DichotomyMethod(a, b, eps, Expression) << endl; break;
			case 4: cout << "Result = " << TangentMethod(a, b, eps, Expression, DerivedExpression) << endl; break;
			case 5: break;
		}
		auto end = chrono::high_resolution_clock::now();
		chrono::duration<float> duration = end - start;
		cout << "Duration " << duration.count() << endl;
	} while (k != 5);
	 
}





/* Условия

// условие ( интегралы)
double Expression(double x)
{
	return ((x * x * x) - 3);
}

// производная от условия ( интегралы)
double DerivedExpression(double x)
{
	return (3 * x * x);
}

// условие (корни)
double Expression(double x)
{
	return (x*x+4*x-2);
}

// производная от условия (корни)
double DerivedExpression(double x)
{
	return (2*x+4);
}

*/