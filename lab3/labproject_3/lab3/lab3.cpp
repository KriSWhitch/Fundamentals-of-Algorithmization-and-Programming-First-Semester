#include <iostream>
#include <math.h>
#include <iomanip> 
#include <stdio.h>
#include <conio.h>

using namespace std;


void first()
{


	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(34) << setfill(probel) << probel;
	cout << setw(3) << setfill(c) << c << endl;
	cout << setw(32) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(11) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c <<endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(2) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(6) << setfill(c) << c << endl;

	int flat_number, floor_number, enter_number;
	cout << "Введите номер квартиры: ";
	cin >> flat_number;
	enter_number = flat_number / 36 + 1;
	floor_number = ((flat_number % 36) / 4) + 1;
	cout << "Номер подъезда: " << enter_number << endl;
	cout << "Номер этажа: " << floor_number << endl;


}


void second()
{
	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(30) << setfill(probel) << probel;
	cout << setw(7) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c;
	cout << setw(3) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(1) << setfill(c) << c << endl;
	
	int final_points, plain, rocket, sputnik;
	cout << "Введите количество сбитых самолётов: ";
	cin >> plain;
	cout << endl;
	cout << "Введите количество сбитых ракет: ";
	cin >> rocket;
	cout << endl;
	cout << "Введите количество сбитых спутников: ";
	cin >> sputnik;
	cout << endl;
	final_points = (plain * 50) + (rocket * 100) + (sputnik * 200);
	cout << "Вы заработали: " << final_points << " очков" << endl;

}


void third()
{


	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(38) << setfill(probel) << probel;
	cout << setw(4) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(33) << setfill(probel) << probel;
	cout << setw(14) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;

	/*int a, b;
	cout << "Введите переменную a: ";
	cin >> a;
	cout << "Введите переменную b: ";
	cin >> b;
	swap(a, b);
	cout << "Переменная a, после смены значения ( без доп. переменной): " << a << endl;
	cout << "Переменная b, после смены значения ( без доп. переменной): " << b << endl;
*/
	int a, b, tmp;
	cout << "Введите переменную a: ";
	cin >> a;
	cout << "Введите переменную b: ";
	cin >> b;
	tmp = a;
	a = b;
	b = tmp;
	
	cout << "Переменная a, после смены значения ( с доп. переменной): " << a << endl;
	cout << "Переменная b, после смены значения ( с доп. переменной): " << b << endl;
	

}


void fourth()
{


	using namespace std;
	char c, probel; probel = ' ';
	cout << "Введите символ "; cin >> c;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(27) << setfill(probel) << probel;
	cout << setw(26) << setfill(c) << c << endl;
	cout << setw(29) << setfill(probel) << probel;
	cout << setw(22) << setfill(c) << c << endl;
	cout << setw(31) << setfill(probel) << probel;
	cout << setw(18) << setfill(c) << c << endl;
	cout << setw(35) << setfill(probel) << probel;
	cout << setw(10) << setfill(c) << c << endl;

	double m, delta = 5.0, first_half, second_half;
	cout << "Введите число m:"; cin >> m;
	first_half = (m + delta) / 2;
	second_half = (m - delta) / 2;
	cout << "Первая часть = " << first_half << endl;
	cout << "Вторая часть =" << second_half << endl;


}




void main()
{
	setlocale(LC_ALL, "Russian");
	first();
	second();
	third();
	fourth();
}
