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
			if (massive[number_position] - number == 0) cout << "\nПозиция числа " << number << " в массиве равна " << number_position;
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

	}
}
