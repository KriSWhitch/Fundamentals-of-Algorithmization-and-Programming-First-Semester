
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <conio.h>
using namespace std;

void train1() {
	
	
	const int N = 100;
	int i, sz, A[N]; 
	int rmn = 0, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		A[i] = (int)(((double)rand() / 
		(double)RAND_MAX) * (rmx - rmn) + rmn);
		// или A[i] = rand() % rmx; - для [0, rmx) 
		cout << A[i] << endl;
	}


}

void first() {

	const int N = 1000;
	int i, sz, A[N];
	int rmn = -99, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 1; i < sz; i++)
	{
		if (i%3!=0) { /*Выполняем лишь каждую иттерацию,
					  которая при делении на 3 не равна нулю*/
		A[i] = (int)(((double)rand() /
			(double)RAND_MAX) * (rmx - rmn) + rmn);
		if (A[i] < 0) {
			A[i] += 10;
		}
		// или A[i] = rand() % rmx; - для [0, rmx) 
		cout << "Элемент №" << i << " = " << A[i] << endl;
		}
		else continue;
	}


}

void first1() {

	const int N = 1000;
	int i, sz, A[N];
	int rmn = -99, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 1; i < sz; i++)
	{
		if (i % 3 != 0) { /*Выполняем лишь каждую иттерацию,
					  которая при делении на 3 не равна нулю*/
			A[i] = (int)(((double)rand() /
				(double)RAND_MAX) * (rmx - rmn) + rmn);
			if (A[i] < 0) {
				cout << "Элемент №" << i << " = " << A[i] << " 10" << endl;
			}
			// или A[i] = rand() % rmx; - для [0, rmx) 
			else {
			cout << "Элемент №" << i << " = " << A[i] << endl;
		}
		}
		else continue;
	}


}

void second() {
	const int N = 1000;
	int i, sz, A[N], k;
	int rmn = -99, rmx = 99;
	cout << "Введите размер массива ";
	cin >> sz;
	cout << "Введите номер элемента, который вы хотите убрать( должен быть меньше размера массива): "; cin >> k;
	k -= 1;
	cout << "Массив А:" << endl;
	srand((unsigned)time(NULL));
	for (i = 0; i < sz; i++)
	{
		if (i != k) { /*Выполняем лишь каждую иттерацию,
					  которая не равна k*/
			A[i] = (int)(((double)rand() /
				(double)RAND_MAX) * (rmx - rmn) + rmn); //могут быть целые четные отрицательные числа
			if (A[i]%2==0) {
				cout << "Элемент №" << i+1 << " = " << A[i] << " 0" << endl;
			}
			// или A[i] = rand() % rmx; - для [0, rmx) 
			else {
			cout << "Элемент №" << i+1 << " = " << A[i] << endl;
		}
		}
		else continue;
	}
}

int dop1() {
	int N, iMin = 0, iMax = 0, first, second, bIndex = 0;

	cout << "Введите размер массива N: ";
	cin >> N;
	int *a = new int[N]; // динамически выделяем память под массив

	for (int i = 0; i < N; i++)
	{
		cout << "Введите a[" << i << "]: ";
		cin >> a[i];
		if (a[iMin] > a[i])
			iMin = i;
		if (a[iMax] < a[i])
			iMax = i;
	}

	if (iMin < iMax)
	{
		first = iMin;
		second = iMax;
	}
	else
	{
		first = iMax;
		second = iMin;
	}

	int* b = new int[N];
	for (int i = 0; i < first; i++)
		b[bIndex++] = a[i];
	for (int i = second; i >= first; i--)
		b[bIndex++] = a[i];
	for (int i = second + 1; i < N; i++)
		b[bIndex++] = a[i];

	for (int i = 0; i < N; i++)
		cout << b[i] << " ";
	return 0;
}


void dop2() {
	{
		
		float s = 0;
		int n, i;
		printf("\n");
		cout << " Размер массива N=";
		cin >> n;
		int* a = new int[n];
		for (i = 0; i < n; i++)
		{
			cout << "\n a[" << i << "]=";
			cin >> a[i];
			s += (float)a[i] / n;
		}
		cout << "\n сред. арифм. = " << s;
		cout << "\n > сред. арифм. - ";
		for (i = 0; i < n; i++) if (a[i] > s) cout << a[i] << " ";
		cout << "\n < сред. арифм. - ";
		for (i = 0; i < n; i++) if (a[i] < s) cout << a[i] << " ";
		
	
	}
}


int dop3() {
	srand(time(NULL));     // новая точка отсчета рнд
	const int N = 20;       // размер массива
	int x[20], i;           // массив, переменная-счетчик
	printf("\n");
	printf("\n");
	/* заполняем массив случайными и выводим на экран: */
	for (i = 0; i < N; i++)
		printf("%4d", x[i] = rand() % 30);
	printf("\n");

	/* теперь считаем уникальные числа: */
	int count;          // сколько раз встретилось число
	int result = 0;     // сколько уникальных чисел найдено
	int k;              // счетчик цикла
	for (i = 0; i < N; i++)
	{
		for (count = k = 0; k <= i; k++)  // сколько раз число встречается в массиве до этого момента?
			if (x[i] == x[k]) count++;
		if (count == 1)             // если число вcтретилось только 1 раз
		{
			result++;               // увеличиваем число уникальных
			printf("%4d", x[i]);    // выводим число на экран для наглядности
		}
	}

	printf("\n\n%d уникальных чисел\n", result);  // результат на экран
	return 0;
}
int main()
{
	setlocale(LC_CTYPE, "Russian");
	//train1();
	first();
	first1();
	second();
	dop1();
	dop2();
	dop3();
}
