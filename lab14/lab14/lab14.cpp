#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>
#include <ctime>
#include <time.h> 

using namespace std;
int n,k,s,i;
double r,sum,imax,imin,c;
double iminn(int*i,int n)// Функция находит  элемент массива.
{
    imin=i[0];
    for(k=0;k<n;k++)
        if(imin>i[k])
        {
            imin=i[k];
        }
    return imin;
}
double imaxx(int *i,int n)// Функция находит максимальный элемент массива.
{
 
    imax=i[0];
    for(k=0;k<n;k++)
    {
        if(imax<i[k])
        {
            imax=i[k];
        }
    }
    return imax;
}

double q1(int *i,int n)//Задание 1, функция вычисляет кол-во элементов меньших с.
    {
        for(k=0;k<n;k++)
        {
            if(i[k]<c)//Условие.
            {
                s=s++;//Счетчик.
            }
        }
        return s;
    }
double q2(int *i,int n)//Задание 2, функция вычисляет сумму элементов, которые идут после первого отрицательного числа.
{
    bool tof;
    if((imin>0) || (k=n-1 && r<0))
    {
        tof=false;
    }
    else if (imin<0)
    {
        for(k=0;k<n;k++)
        {
            if(i[k]<0)//Условие.
            {
                int k2=k;
                for(k=k2+1;k<n;k++)
                sum=sum +i[k];//Считаем сумму.
                tof=true;
            }
        }
    }
    return tof;
}

int first()
{
    
    cout<<"\nВведите кол-во элементов массива: ";
    cin>>n;
    cout<<"\n Введите значение с: ";
    cin>>c;
    int *i=new int[n];
    for(k=0;k<n;k++)
    {
        cout<<" i["<<k<<"]=";
        cin>>r;
        i[k]=r;
    }
    iminn(i,n);
    cout<<"\nКоличество элементов, которые меньше "<<c<<"="<<q1(i,n)<<endl;
    bool tof= q2(i,n);
    if(tof)
        cout<<"\nСумма элементов после первого отрицательного числа ="<<sum<<endl;
    else
        cout<<"\nСумму не вычислить, так как отрицательного элемента нет или он находится в конце массива.";
    delete[]i;
    return 0;
}

void second()
{
	
	srand(time(NULL));
	int i, j;
	int **matrix;
	int n = 5;
	int m = 6;
	matrix = new int *[n];
	for (int i = 0; i < n; i++)
		matrix[i] = new int[m];
	
	printf("\nСгенерированная матрица:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			matrix[i][j] = rand() % 51 - 25;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\nРезультат:\n");
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			if (matrix[i][j] < 0) matrix[i][j] = 0;
			printf("%d\t", matrix[i][j]);
		}
		printf("\n");
	}
	delete[]matrix;
}


int arr[64];
int min_el()
{
	int min = arr[0];
	for (int i = 1; i < 64; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}
int summ()
{
	int sum = 0;
	int last;
	int first;
	for (int i = 0; i < 64; i++)
	{
		if (arr[i] >= 0)
			first = i;
		break;
	}
	for (int i = 63; i >= 0; i--)
	{
		if (arr[i] >= 0)
			last = i;
		break;
	}
	for (int i = first; i <= last; i++)
	{
		sum += arr[i];
	}
	return sum;
}
int dop1()
{
	srand(time(NULL));
	for (int i = 63; i >= 0; i--)
	{
		arr[i] = rand() % 51;
	}
	cout << "Сумма:" << summ() << endl;
	cout << "Минимальное:" << min_el() << endl;
	for (int i = 0; i < 64; i++)
	{
		cout << "Элемент под номером " << i << " равен " << arr[i] << endl;
	}
	return 0;
}


int dop2()
{
	const int N = 3;
    int a[N][N],i,j,k,m;
	srand(time(NULL));
	for (i = 0; i < N; i++)
		for (j = 0; j < N; j++)
			a[i][j] = rand() % 20 - 10;
    for (i=0;i<N;i++)
        for(j=0;j<N;j++)
        if (a[i][j]<0) for(k=0,m=i;k<N;k++) a[k][m]/=2;
    for (i=0;i<N;i++)
        for(j=0;j<N;j++) {printf("%i ",a[i][j]); if(j==2) printf("\n");}
    return 0;
}

#define MAX 100 
 
int dop3() { 
    int a[MAX][MAX], n, m, r, c; 
    srand(time(NULL)); 
    printf("Введите n и m: "); 
    scanf_s("%d%d", &n, &m); 
    puts("Начальная матрица:"); 
    for (r = 0; r < n; ++r) { 
        for (c = 0; c < m; ++c) printf("%""4d", a[r][c] = rand() % 101 - 50); 
        putchar('\n'); 
    } 
    for (r = 0; r < n; ++r) { 
        for (c = 0; c < m; ++c) if (a[r][c] <= 0) break; 
        if (c == m) break; 
    } 
    if (r < n) { 
        printf("строка № %d\n", r); 
        if (r != 0) for (c = 0; c < m; ++c) a[r - 1][c] = - a[r - 1][c]; 
    } 
    puts("Итоговая матрица:"); 
    for (r = 0; r < n; ++r) { 
        for (c = 0; c < m; ++c) printf("%""4d", a[r][c]); 
        putchar('\n'); 
    } 
    return 0; 
}

int main() {
	setlocale(LC_ALL, "Russian");
	first();
	second();
	dop1();
	dop2();
	dop3();
}