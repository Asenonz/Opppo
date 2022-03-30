#include <iostream>
#include <fstream>
#include <time.h>
#include <ctime>
#include <string.h>

using namespace std;

int GetRandomNumber(int min, int max)
{
	srand(time(0));
	int num = min + rand() % (max - min + 1);
	return num;

}
//Год, месяц, день : час, минута

void GenerateFile()
{
	ofstream out; // поток для записи
	out.open("C:\\Users\\Aseno\\source\\repos\\opppo\\opppo\\Test.txt"); // окрываем файл для записи
	if (out.is_open())
	{
		for (int i = 0; i < 100000; i++)
		{

			srand(time(0));
			int year = GetRandomNumber(2000, 2100);
			int month = GetRandomNumber(1, 12);
			int day_month = GetRandomNumber(1, 30);
			int hours = GetRandomNumber(0, 23);
			int minutes = GetRandomNumber(0, 59);

			if (hours < 10)
			{
				out << day_month << "." << month << "." << year << " - 0" << hours << ":" << minutes << endl;

			}
			else if (minutes < 10)
			{
				out << day_month << "." << month << "." << year << " - " << hours << ": 0" << minutes << endl;

			}
			else if (minutes < 10 && hours < 10)
			{
				out << day_month << "." << month << "." << year << " - 0" << hours << ": 0" << minutes << endl;
			}
			else if (i % 5 == 0)
			{
				out << "asdasd asdasdasd" << endl;
			}
			else
			{
				out << day_month << "." << month << "." << year << " - " << hours << ":" << minutes << endl;
			}


		}
		cout << "Успешно!" << endl;

	}
	else
	{
		cout << "Error!" << endl;
	}

	cout << "End of program" << endl;

}

//void GenerateFile()
//{
//	ifstream file;
//	file.open("C:\\Users\\Aseno\\source\\repos\\opppo\\opppo\\Test.txt");
//	if (file.is_open())
//	{
//
//
//	}
//	else
//	{
//		cout<<"File is not found"<<endl;
//	}
//
//}


int main()
{
	setlocale(LC_ALL, "rus");
	GenerateFile();

}


