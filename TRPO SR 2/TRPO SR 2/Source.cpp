#include <iostream>
using namespace std;

int main()
{
	int task_number;
	setlocale(0, "ru");
	cout << "������� ����� �������: ";
	cin >> task_number;
	switch (task_number)
	{
	case 1:
	{
		double* massive;
		int i, massive_size, number;
		cout << "\n������� ����� ��������� �������: ";
		cin >> massive_size;
		massive = new double[massive_size];
		for (i = 0; i < massive_size; i++) massive[i] = rand() / 1500 - 10;
		for (i = 0; i < massive_size; i++) {
			cout << massive[i] << "\t";
		}
		cout << "\n������� ����� �� �������: ";
		cin >> number;
		for (int number_position = 0; number_position < massive_size; number_position++)
		{
			if (massive[number_position] - number == 0) cout << "\n������� ����� " << number << " � ������� ����� " << number_position;
		}
		delete[]massive;
		break; }

	case 2:
	{

		double* massive;
		int i, massive_size;
		cout << "\n������� ����� ��������� �������: ";
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
		cout << "\n������� ����� ��������� �������: ";
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
}
