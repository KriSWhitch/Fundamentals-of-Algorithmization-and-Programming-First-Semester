
#include <iostream>
#include <ctime>
#include <iomanip>
#include <cmath>
#include <stdlib.h>
using namespace std;

//Первое задание

void first() {
	srand(time(0));
	int matrix[5][5];
	int sum(0);
	for (int i = 0; i < 5; ++i) {
		for (int j = 0; j < 5; ++j) {
			matrix[i][j] = rand() % 16;
			cout << setw(4) << matrix[i][j];
			if (j > i)sum += matrix[i][j];
		}
		cout << "\n";
	}
	cout << "\n" << "sum : " << sum << "\n";
	cout << endl;
	}

//Второе задание

void second() {
	const int N = 5, M = 5; // размер матрицы
	int i, j, matrix[N][M];
	int index_i, index_j; // индексы расположения
	int max;              // максимальный элемент
	srand((unsigned)time(0));
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
			matrix[i][j] = rand() % 100; // заполняем матрицу случайными числами
	for (i = 0; i < N; i++)
		for (j = 0; j < M; j++)
		{
			if (j % 10 == 0)
				cout << endl;
			cout << setw(3) << matrix[i][j]; // выводим на экран
		}
	max = matrix[0][0]; // присваиваем первый элемент
	for (i = 0; i < N; i++)
		for (j = 1; j < M; j++)
			if (max < matrix[i][j])
			{
				max = matrix[i][j]; // ищем максимальный элемент
				index_i = i+1;
				index_j = j+1;
			}
	cout << endl << endl;
	cout << "Максимальный элемент расположен " // не забываем что отсчёт в строках
		<< index_i << " " << index_j << endl;  // и столбцах идёт с 0
	cout << endl;
}

void dop1() {
    setlocale(LC_ALL,"Russian");
    const int n=5;
    int Mass[n][n], d=n, k, count=1, i,j,p;
    for(p=0;count<=pow(n,2);p++){
        for(k=p;k<d;k++)
            Mass[p][k] = count++;
        for(k=p+1;k<d-1;k++)
            Mass[k][n-(p+1)] = count++;
        for(k=n-(p+1);k>=p;k--)
            Mass[n-(p+1)][k] = count++;
        for(k=n-(p+2);k>p;k--)
            Mass[k][p] = count++;
        d--;
    }   
    cout<<endl; 
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            cout.width(2);          
            cout<<Mass[i][j]<<"  ";
        }
        cout<<endl;
    }
}

void dop2()
{
    int **mas, n, i, j;
    cout<<"Ввод n = ";
    cin>>n;
    mas=new int*[n];
     for(i=0; i<n; i++)
       mas[i]=new int[n];
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
            mas[i][j]=(i+j)%n+1;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
            cout<<mas[i][j]<<" ";
        cout<<endl;
    }  
}

void dop3() {
	const int N = 6;
    int A[N][N];
    int k, sum;

    cout << "Введите матрицу:" << endl;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> A[i][j];
        }
    }

	//1
    cout << "Искомые номера для k-ых строки (столбца): ";
    for (int i = 0; i < N; i++)
    {
        k = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] == A[j][i])
                k++;
        }
        if (k == N)
            cout << i + 1 << " ";
    }
    cout << endl;
    //2
    cout << "Искомые суммы элементов:" << endl;
    for (int i = 0; i < N; i++)
    {
        k = 0;
        for (int j = 0; j < N; j++)
        {
            if (A[i][j] < 0)
                k++;
        }
        if (k > 0)
        {
            sum = 0;
            for (int j = 0; j < N; j++)
            {
                sum += A[i][j];
            }
            cout << "Строка " << i + 1 << ": " << sum << endl;
        }
    }
    system("pause");
    
}

int main()
{
	setlocale(LC_ALL, "Russian");
	first();
	second();
	dop1();
	dop2();
	dop3();
}

