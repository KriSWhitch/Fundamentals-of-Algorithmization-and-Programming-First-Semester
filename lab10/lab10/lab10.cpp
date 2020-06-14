
#include <iostream>
using namespace std;

void first()
{
	int A; char tmp[33];
	cout << "Введите число ";
	cin >> A;
	_itoa_s(A, tmp, 2);

	cout << "Число в двоичном виде = " << tmp << endl;
	if ((A & 1) == 0)
		cout << "Число кратно 2" << endl;
	else
		cout << "Число не кратно 2" << endl;

}

void second() {
	int A, position, n, razn;
	char tmp[33];
	cout << "Введите A" << endl;
	cin >> A;
	_itoa_s(A, tmp, 2);
	cout << tmp << endl;
	cout << "Введите начальную позицию" << endl;
	cin >> position;
	cout << "Введите число битов" << endl;
	cin >> n;
	razn = position - n;
	while (position >= razn)
	{
		A |= 1 >> position;
		_itoa_s(A, tmp, 2);
		position--;
	}

	cout << tmp << endl;
}

void dop1() {
	char tmp[33];
	int A, B, maskA = 14;
	int maskB = ~maskA >> 1;
	cout << "Первое число="; cin >> A;
	cout << "Второе число="; cin >> B;
	_itoa_s(A, tmp, 2); cout << "A=" << tmp << endl;
	_itoa_s(B, tmp, 2); cout << "B=" << tmp << endl;
	_itoa_s(maskA, tmp, 2);
	cout << "Маска для А: " << tmp << endl;
	_itoa_s((A & maskA) >> 1, tmp, 2);
	cout << "Выделенные биты А: " << tmp << endl;
	_itoa_s(maskB, tmp, 2);
	cout << "Маска для В: " << tmp << endl;
	_itoa_s(B & maskB, tmp, 2);
	cout << " Очищены биты в B: " << tmp << endl;
	_itoa_s(((B & maskB) | ((A & maskA) >> 1)), tmp, 2);
	cout << " Результат B=" << tmp << endl;

}

void dop2() {
	unsigned int x, tmp = 0, m = 0x00000008;
	cout << "Введи x: "; cin >> x;
	while (m <= 0x00002000)
	{
		tmp += (x & m) ? 0 : 1;
		m <<= 1;
	}

	printf("нулей с 3 по 13 биты = %d\n", tmp);
	puts("");
}

void dop3() {
	unsigned int a = 1;
	unsigned int b = 0;
	int start = 8;
	int count = 8;
	for (int i = start; i < start + count; i++)
		a |= 1 << i;
	for (int i = 31; i >= 0; i--) {
		cout << ((a >> i) & 1);
		if (i % 8 == 0)
			cout << " ";
	}
	cout << endl;
	int start1 = 8;
	int count1 = 8;
	int start2 = 12;
	for (int i = start1, j = start2; i < start1 + count1; i++, j++) {
		int value = a >> i & 1;
		if (((b >> j) & 1) != value)
			b ^= 1 << j;
	}
	for (int i = 31; i >= 0; i--) {
		cout << ((b >> i) & 1);
		if (i % 8 == 0)
			cout << " ";
	}
	cout << endl;
}
	

int main()
{
	setlocale(LC_CTYPE, "Russian");
	first();
	second();
	dop1();
	dop2();
	dop3();
}