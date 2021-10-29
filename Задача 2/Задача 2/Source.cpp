#include<iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
using namespace std;
int a, i;
int GetRandomNumber(int min, int max)
{
	// Установить генератор случайных чисел
	srand(time(NULL));
   // Получить случайное число - формула
	int num = min + rand() % (max - min + 1);
    return num;
}
int main()
{
	setlocale(LC_ALL, "");
	int number = GetRandomNumber(1, 100); // Диапазон чисел: [1, 100]
	cout << "Попробуйте отгадать число от 1 до 100, которое загадал компьютер." << " " << "У Вас есть 7 попыток. Удачи!" << endl;
	for (i = 1; i <= 7; i++)
	{
		cout << "Попытка №" << " " << i << endl;
		cout << "Введите число:" << endl;
		cin >> a;
		if (number == a)
		{
			cout << "Вы угадали число!  Поздравляем!" << endl;
			exit(0);
		}
		while (number != a)
		{
			if (a > number)
			{
				cout << "Загаданное число меньше, чем" << " " << a << endl;
				break;
			}
			else
			{
				cout << "Загаданное число больше, чем" <<" " << a << endl;
				break;
			}
		}

	}
	cout << "К сожалению, вы проиграли..." << endl;
	cout << "Загаданное число:" << number << endl;
	return 0;
}
