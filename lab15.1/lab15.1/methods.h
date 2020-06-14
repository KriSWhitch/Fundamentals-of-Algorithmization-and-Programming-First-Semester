#include <iostream>
#ifndef methods
#define methods


// метод трапеций
double TrapezoidMethod(double a, double b, double n, double (*exx)(double x))
{
	double result = 0;
	double h = (b - a) / n;
	double x = a;
	while (x < b - h)
	{
		result += h * (exx(x) + exx(x + h)) / 2;
		x += h;
	}
	return result;
}
// метод парабол
double ParabolaMethod(double a, double b, double n, double(*foo)(double x))
{
	double result;
	n *= 2;
	double h = (b - a) / n;
	double x = a + h;
	double s1 = 0, s2 = 0, i = 1;
	while (i < n)
	{
		s1 += foo(x);
		x += h;
		s2 += foo(x);
		x += h;
		i += 2;
	}
	result = h / 3 * (foo(a) + 4 * foo(a + h) + 4 * s1 + 2 * s2 + foo(b));
	return result;
}
// метод дихотомии 
double DichotomyMethod(double a, double b, double eps, double(*fo)(double x)) {
	double x, y, y1;
	int n = 0;
	do {
		x = a;
		y = fo(x); n++;
		x = (a + b) / 2;
		y1 = fo(x); n++;
		if ((y * y1) <= 0)
			b = x;
		else a = x;
	} while (abs(b - a) > eps);
	return x;
}
// метод касательных 
double TangentMethod(double a, double b, double eps, double(*pf)(double x), double(*pfsh)(double x)) {
	double t;
	int n = 0;
	do {

		t = pf(b) / pfsh(b);
		b -= t;
		n += 2;
	} while (abs(t) > eps);
	return b;
}


#endif