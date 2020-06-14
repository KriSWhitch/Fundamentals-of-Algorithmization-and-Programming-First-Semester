#include <iostream>
#include <math.h>
#include <iomanip> 
#include <string>
#include <cmath>


using namespace std;


void first_1()
{
	
	double t = 5e-5, y = 0.4, z, w, a = -1.0, j;
	for (int n = 1; n <= 5; ++n)
	{
		cout << "Введите j: " << endl;
		cin >> j;
		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7 * a - z);
		printf("z = %6.3f\t", z);
		printf("w = %6.3f\n", w);
	}
}

void first_2()
{
	double t = 5e-5, y = 0.4, z, w, m = 6.0, a = -1.0, j = 1.0;
	while (j <= 2.0)
	{

		z = sqrt(t * a + y) + 4 * exp(-2 * j);
		w = log(0.4 * y) / (7 * a - z);
		printf("z = %6.3f\t", z);
		printf("w = %6.3f\n", w);
		j += 0.1;
	}
}

void first_3()
{
	double t, y = 0.4, z, w, m = 6.0, a, j;
	
	for (j = 1.0; j <= 3.0; j +=1) {
		cout << "Введите a: "; cin >> a;
		for (t = 3.0; t <= 4.0; t += 0.2) {
			z = sqrt(t * a + y) + 4 * exp(-2 * j);
			w = log(0.4 * y) / (7 * a - z);
			
		}
		printf("z = %6.3f\t", z);
		printf("w = %6.3f\n", w);
	}

}



void second()
{
	unsigned long k;
	cout << "Введите число k: ";
	cin >> k;
	double l2 = log10(2.0);
	unsigned long b = 1;
	unsigned long n = 0;
	unsigned long i = 0;
	while (n < k) {
		b *= 2;
		i++;
		n += (int)floor(i * l2) + 1;;
	}
	for (size_t j = n - k; j > 0; j--) {
		b /= 10;
	}
	unsigned long answer = b % 10;
	cout << "Ответ: " << answer;
}


int third()
{

	int n;  //Переменная определяющая количество лет.
	cout << "Сколько лет фирма закупала оборудование? n: "; cin >> n;
	double s, p; //Переменные для хранения процента уценки и стоимости закупленного каждый год оборудования.
	cout << " Процент уценки: "; cin >> p; // Ввод данных.
	double S = 0;
	for (int i = 1; i <= n; i++) {
		cout << "Введите сумму оборудования за " << i << " год - "; cin >> s;  // Ввод данных.
		S = S * (100 - p) / 100; // Уценка старого оборудования
		S += s; // Суммируем со стоимостью нового оборудования 
		switch (i) // Вывод общей стоимости с описанием в зависимости от года
		{
		case 1: cout << "Общая стоимость оборудования за " << i << " год равна = " << S << endl; break;
		case 2:
		case 3:
		case 4: cout << "Общая стоимость оборудования за " << i << " года равна = " << S << endl; break;
		default: cout << "Общая стоимость оборудования за " << i << " лет равна = " << S << endl;
			break;
		}
	}
	return 0;
}

int fourth()
{
	int q;
	double p, sum = 0;
	int count(1);
	cout << "План заработка в день состовляет: "; cin >> q; 
	cout << "Сколько заработала фирма за первый день? p: "; cin >> p;
	while (q > p)
	{
		p *= 1.03;
		count++;
		sum = sum + p;
	}
	cout << "В итоге фирма заработала: " << sum << " рублей" << endl;
	cout << "Фирме потребовалось для достижения цели " << count << " дней" << endl;
	return 0;
}

int main()
{
	setlocale(LC_CTYPE, "Russian");
	//first_1();
	//first_2();
	//first_3();
	//second();
	//third();
	fourth();
}

