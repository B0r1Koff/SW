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
	case 2: {
		int t;
		cout << "������� ����� ��� ������ ";
		cin >> t;
		switch (t) {
		case 1: cout << "�����������" << "\n"; break;
		case 2: cout << "�������" << "\n"; break;
		case 3: cout << "�����" << "\n"; break;
		case 4: cout << "�������" << "\n"; break;
		case 5: cout << "�������" << "\n"; break;
		case 6: cout << "�������" << "\n"; break;
		case 7: cout << "�����������" << "\n"; break;
		}
		break;
	}
	case 3: {
		int b1;
		string a1;
		cout << "������� ����� ";
		cin >> a1 >> b1;
		if (b1 > size(a1)) {
			cout << "������";
			return 1;
		}
		a1 = a1.erase(b1, size(a1));
		cout << a1;
		return 0;
	}
		  break;
	case 4: {
		int a2, b2, c2, x2, y2;
		cout << "������� ������� ��������� " << "\n";
		cin >> x2;
		cin >> y2;
		cout << "������� ������� ��������������� " << "\n";
		cin >> a2 >> b2 >> c2;
		if (x2 > y2) { double t = x2; x2 = y2; y2 = t; }
		if (a2 > b2) { double t = a2; a2 = b2; b2 = t; }
		if (b2 > c2) { double t = b2; b2 = c2; c2 = t; }
		if (a2 > b2) { double t = a2; a2 = b2; b2 = t; }
		if ((a2 < x2) && (b2 < y2)) cout << "�������������� ������� � ���������";
		else cout << "�������������� �� ������� � ���������";
		return 0; } break;
	case 5: {srand(time(0));
		int firstDigitOfPassword1;
			firstDigitOfPassword1=rand()%10;
			int secondDigitOfPassword1;
			secondDigitOfPassword1 = rand() % 10;
			int thirdDigitOfPassword1;
			thirdDigitOfPassword1 = rand() % 10;
			int fourthDigitOfPassword1;
			fourthDigitOfPassword1 = rand() % 10;
			for (int firstDigitOfPassword2 = 0; firstDigitOfPassword2 < 10; firstDigitOfPassword2++) {
				for (int secondDigitOfPassword2 = 0; secondDigitOfPassword2 < 10; secondDigitOfPassword2++) {
					for (int thirdDigitOfPassword2 = 0; thirdDigitOfPassword2 < 10; thirdDigitOfPassword2++) {
						for (int fourthDigitOfPassword2 = 0; fourthDigitOfPassword2 < 10; fourthDigitOfPassword2++) {
							if (firstDigitOfPassword1 == firstDigitOfPassword2 and secondDigitOfPassword1 == secondDigitOfPassword2 and thirdDigitOfPassword1 == thirdDigitOfPassword2 and fourthDigitOfPassword1 == fourthDigitOfPassword2) {
								cout << "password: " << firstDigitOfPassword2 << secondDigitOfPassword2 << thirdDigitOfPassword2 << fourthDigitOfPassword2; break;
							}
						}
					}
				}
			}
			return 0;
	}
	}
}