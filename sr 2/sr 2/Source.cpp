#include <iostream>
using namespace std;

int main()
{
	int task_number;
	setlocale(0, "ru");
	cout << "Введите номер задания: ";
	cin >> task_number;
	switch (task_number)
	{
	case 1:
	{
		double* massive;
		int i, massive_size, number;
		cout << "\nВведите число элементов массива: ";
		cin >> massive_size;
		massive = new double[massive_size];
		for (i = 0; i < massive_size; i++) massive[i] = rand() / 1500 - 10;
		for (i = 0; i < massive_size; i++) {
			cout << massive[i] << "\t";
		}
		cout << "\nВведите число из массива: ";
		cin >> number;
		for (int number_position = 0; number_position < massive_size; number_position++)
		{
			if (massive[number_position] - number == 0) cout << "\nПозиция числа " << number << " в массиве равна " << number_position << "\n";
		}
		delete[]massive;
		break; }

	case 2:
	{

		double* massive;
		int i, massive_size;
		cout << "\nВведите число элементов массива: ";
		cin >> massive_size;
		massive = new double[massive_size];
		for (i = 0; i < massive_size; i++) massive[i] = rand() / 1500 - 10;
		for (i = 0; i < massive_size; i++) {
			cout << massive[i] << "\t";
		}

		cout << "\n\n";
		for (int number_position = 0; number_position < massive_size - 2; number_position++)
		{
			if (massive[number_position + 2] < massive[number_position] - massive[number_position + 1]) { cout << massive[number_position + 2] << "\t"; }
		}
		delete[]massive;
		break; }

	case 3:
	{

		double* massive;
		int i, massive_size;
		cout << "\nВведите число элементов массива: ";
		cin >> massive_size;
		massive = new double[massive_size];
		for (i = 0; i < massive_size; i++) cin >> massive[i];
		for (i = 0; i < massive_size; i++) {
			cout << massive[i] << "\t";
		}


		cout << "\n\n";
		int counter = 0, sum = 1;
		for (int number_position = 0; number_position < massive_size - 1; number_position++)
		{
			if (massive[number_position] == massive[number_position + 1]) { counter++; }
			else
			{
				if (max(counter, sum) <= counter) sum = max(counter, sum);
				counter = 0;
			}
		}
		cout << sum + 1;
		break; }
	case 4:
	{
		int n, row, col;
		double** matrix, * matrix_col;
		cout << "Введите n для задания размеров матрицы (n x n) : ";
		cin >> n;
		cout << "\nИсходная матрица: \n";
		matrix = new double* [n];
		for (row = 0; row < n; row++)
			matrix[row] = new double[n];
		matrix_col = new double[n];
		for (row = 0; row < n; row++)
			for (col = 0; col < n; col++) matrix[row][col] = rand() / 1500 - 10; cout << "\n";
		for (row = 0; row < n; row++) {
			for (col = 0; col < n; col++) {
				cout << matrix[row][col] << "\t";
			}
			cout << "\n\n";
		}
		for (row = 1; row < n; row++)
			for (col = 0; col < row; col++)
			{
				swap(matrix[row][col], matrix[col][row]);
			}
		cout << "\nТранспонированная матрица по главной диагонали: \n\n";
		for (row = 0; row < n; row++) {
			for (col = 0; col < n; col++) {
				cout << matrix[row][col] << "\t";
			}
			cout << "\n\n";
		}
		cout << "\nТранспонтрованная матрица по побочной диагонали: \n\n";
		for (row = 0; row < n; row++)
		{
			for (col = 0; col < n; col++)
			{
				cout << matrix[n - 1 - row][n - 1 - col] << "\t";
			}
			cout << "\n\n";
		}
		for (col = 0; col < n; col++) { delete[]matrix[col]; }
		delete[]matrix;
		break; }
	case 5:
	{
		int** a, * b;
		int dots_number, row, col;
		cout << "\nЗадайте число точек: ";
		cin >> dots_number;
		cout << "\n";
		a = new int* [dots_number];
		for (row = 0; row < dots_number; row++)
			a[row] = new int[2];
		b = new int[2];
		for (row = 0; row < 2; row++)
			for (col = 0; col < dots_number; col++)  a[row][col] = rand() / 1500 - 10;
		for (row = 0; row < 2; row++) {
			for (col = 0; col < dots_number; col++) {
				cout << a[row][col] << "\t";
			}
			cout << "\n\n";
		}
		int s = 0;
		for (int c = 0; c < col; c++)
		{
			for (int d = 0; d < col; d++)
			{
				if (((a[0][c] - a[0][d]) * (a[0][c] - a[0][d])) + ((a[1][c] - a[1][d]) * (a[1][c] - a[1][d])) > s)
				{
					s = ((a[0][c] - a[0][d]) * (a[0][c] - a[0][d])) + ((a[1][c] - a[1][d]) * (a[1][c] - a[1][d]));
				}
			}
		}
		cout << "Наибольшее расстояние между точками равно ";
		cout << pow(s, 1. / 2) << "\n";
		break; }
	}

}
