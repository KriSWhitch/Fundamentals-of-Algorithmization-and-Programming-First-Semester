#include <iostream>
#include <math.h>

void first()
{
	setlocale(LC_ALL, "Russian");
	double a = 1.75, b = 4.5e-4, y, r;
	y = a * exp(-2 * b) - sqrt(1 + a);
	r = log(1 + 20 * b) / (1 + a);
	std::cout << "Задание №1 \n";
	std::cout << "y = " << y << "\n";
	std::cout << "r = " << r << "\n";

}


void second()
{
	setlocale(LC_ALL, "Russian");
	double z, y, n = 2, b = -0.12, x = 1.3e-4;
	z = 1 / (x - 1) + sin(x - sqrt(n));
	y = exp(-b) / 2 * z;
	std::cout << "Задание №2 \n";
	std::cout << "z = "<< z << "\n";
	std::cout << "y = " << y << "\n";
	
}


void third()
{
	setlocale(LC_ALL, "Russian");
	double y, w, m = 6, z = 0.05e-5;
	y = cos(5 * m) / pow(sin(0.04 * m), 2);
	w = 4 * z * y - 7 * exp(-2 * y);
	std::cout << "Дополнительное задание №1 \n";
	std::cout << "y = " << y << "\n";
	std::cout << "w = " << w << "\n";

}


void fourth()
{
	setlocale(LC_ALL, "Russian");
	double t, u, k = 4, x = 2e-4, a = 8.1;
	t = 2 * k / a + log(2 + x);
	u = sqrt(k - 1) / (t + 1);
	std::cout << "Дополнительное задание №2 \n";
	std::cout << "t = " << t << "\n";
	std::cout << "u = " << u << "\n";
	
}


void fifth()
{
	setlocale(LC_ALL, "Russian");
	double f, d, i = -6, z = 1.5e-6, x = 4.5;
	d = tan(-x * i) / sqrt(x - z);
	f = sin(2*d)/d;
	std::cout << "Дополнительное задание №3 \n";
	std::cout << "d = " << d << "\n";
	std::cout << "f = " << f << "\n";
	
}

void main()
{
	first();
	second();
	third();
	fourth();
	fifth();
}
