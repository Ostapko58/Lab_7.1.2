#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;
void Create(int a[8][7], const int rowCount, const int colCount, const int Low,const int High);
void Print(int a[8][7], const int rowCount, const int colCount);
void Sort(int a[8][7], const int rowCount, const int colCount);
void Change(int a[8][7], const int row1, const int row2, const int colCount);



int main()
{
	srand((unsigned)time(NULL));
	int Low = -8;
	int High = 42;
	const int rowCount = 8;
	const int colCount = 7;
	int a[rowCount][colCount];
	Create(a, rowCount, colCount, Low, High);
	Print(a, rowCount, colCount);
	Sort(a, rowCount, colCount);
	Print(a, rowCount, colCount);
	return 0;
}
void Create(int a[][7], const int rowCount, const int colCount, const int Low,const int High)
{
	for (int i = 0; i < rowCount; i++)
		for (int j = 0; j < colCount; j++)
			a[i][j] = Low + rand() % (High - Low + 1);
}
void Print(int a[][7], const int rowCount, const int colCount)
{
	cout << endl;
	for (int i = 0; i < rowCount; i++)
	{
		for (int j = 0; j < colCount; j++)
			cout << setw(4) << a[i][j];
		cout << endl;
	}
	cout << endl;
}
void Sort(int a[][7], const int rowCount, const int colCount)
{
	for (int i0 = 0; i0 < rowCount - 1; i0++)
		for (int i1 = 0; i1 < rowCount - i0 - 1; i1++)
			if ((a[i1][0] < a[i1 + 1][0])
				||
				(a[i1][0] == a[i1 + 1][0] &&
					a[i1][1] < a[i1 + 1][1])
				||
				(a[i1][0] == a[i1 + 1][0] &&
					a[i1][1] == a[i1 + 1][1] &&
					a[i1][2] > a[i1 + 1][2]))
				Change(a, i1, i1 + 1, colCount);
}
void Change(int a[][7], const int row1, const int row2, const int colCount)
{
	int tmp;
	for (int j = 0; j < colCount; j++)
	{
		tmp = a[row1][j];
		a[row1][j] = a[row2][j];
		a[row2][j] = tmp;
	}
}
