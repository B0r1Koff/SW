#include <iostream>

using namespace std;

int main() {
	setlocale(LC_ALL, "Rus");
	cout << "������� ����� �������: " << "\n 1 - ������� 1" << "\n 2 - ������� 2" << "\n 3 - ������� 3" << "\n 4 - ������� 4" << "\n" << "\n";
	int i;
	cin >> i;
	switch (i) {
	case 1: {int a, b, c;
		cout << "������� ����� ";
		cin >> a;
		c = a;
		int f = 0;
		do {
			c /= 10;
			f++;
		} while (c > 0);
		cout << f << endl;
		int s;
		for (int d = f; d >= 1; d--) {
			s = pow(10, d - 1);
			b = (a / s) % 10;
			cout << b << "\t";
		}
		break;
	}
	}
}