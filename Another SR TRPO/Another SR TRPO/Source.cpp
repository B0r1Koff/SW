#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct student
{
	string surname;
	int group_number;
	double avg_score;
	int list_number;
}*student_list;

int main()
{
	setlocale(0, "ru");
	string file_path = "D:\\file.txt";
	int counter = 0;
	ifstream file(file_path, ios::in);
	string check;
	while (!file.eof())
	{
		getline(file, check);
		counter++;
	}
	cout << counter << "\n";
	file.close();
	student_list = new student[counter];
	ifstream file1(file_path, ios::in);
	for (int i = 0; i < counter; i++)
	{
		file1 >> student_list[i].surname >> student_list[i].group_number >> student_list[i].avg_score >> student_list[i].list_number;
		cout << student_list[i].surname << " " << student_list[i].group_number << " " << student_list[i].avg_score << " " << student_list[i].list_number << "\n";
	}
	file1.close();
	ofstream file2(file_path, ios::trunc);
	for (int i = counter - 1; i >= 0; i--)
	{
		file2 << student_list[i].surname << " " << student_list[i].group_number << " " << student_list[i].avg_score << " " << student_list[i].list_number << "\n";
	}
	file2.close();
	ifstream count_size(file_path, ios::in);
	int size_of_file;
	char a;
	int counter1 = 0;
	while (!count_size.eof())
	{
		counter1++;
		count_size.get(a);
	}
	cout << "\nsize : " << counter - 1  + counter1 << "\n\nsorted : \n\n";
	ofstream file3(file_path, ios::app);
	string sort;
	int j = 0, i = 0, pos = -1;
	for (j = 0; j < counter; j++)
	{
		for (i = 0; i < counter; i++)
		{
			if (student_list[i].surname.at(0) < student_list[j].surname.at(0))
			{
				if (i != pos) pos = i;
			}
		}
		cout << student_list[pos].surname << " " << student_list[pos].group_number << " " << student_list[pos].avg_score << " " << student_list[pos].list_number << "\n";
	}
}
