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

	
}
