#include<iostream>
#include <algorithm>
#include <stdlib.h>
#include <time.h>
#include <cstdlib>
using namespace std;
int a, i;
int GetRandomNumber(int min, int max)
{
	// ���������� ��������� ��������� �����
	srand(time(NULL));
   // �������� ��������� ����� - �������
	int num = min + rand() % (max - min + 1);
    return num;
}
int main()
{
	setlocale(LC_ALL, "");
	int number = GetRandomNumber(1, 100); // �������� �����: [1, 100]
	cout << "���������� �������� ����� �� 1 �� 100, ������� ������� ���������." << " " << "� ��� ���� 7 �������. �����!" << endl;
	for (i = 1; i <= 7; i++)
	{
		cout << "������� �" << " " << i << endl;
		cout << "������� �����:" << endl;
		cin >> a;
		if (number == a)
		{
			cout << "�� ������� �����!  �����������!" << endl;
			exit(0);
		}
		while (number != a)
		{
			if (a > number)
			{
				cout << "���������� ����� ������, ���" << " " << a << endl;
				break;
			}
			else
			{
				cout << "���������� ����� ������, ���" <<" " << a << endl;
				break;
			}
		}

	}
	cout << "� ���������, �� ���������..." << endl;
	cout << "���������� �����:" << number << endl;
	return 0;
}
