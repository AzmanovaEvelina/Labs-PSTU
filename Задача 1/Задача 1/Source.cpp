#include<iostream>
#include <algorithm>

using namespace std;
int x, a, b, c;
int main()
{
	setlocale(LC_ALL, "");
	cout << "������� ����������� ����� (�� ����������� ������ ���� � �����):" << endl;
	cin >> x;
	while((x < 100) || (x > 999))
	{
		cout << "����� �� ������������� ����������� �����, ������� ����� ������:" << endl;
		cin >> x;
	}
	a = x / 100;
	b = x % 100 / 10;
	c = x % 100 % 10;
	if ((a == b) || (a == c) || (b == c)) {
		cout << "����� �� ������������� ����������� �����, ������� ����� ������:" << endl;
		cin >> x;
	}
	cout << "��� ��������� ������������������ �����:" << endl;
	
	int mas[] = { a,b,c };
	sort(mas, mas + 3);
	
	do {
		cout << mas[0] << mas[1] << mas[2] << endl;
	} while (next_permutation(mas, mas + 3));
	cout << "������������ �����:" << " " << mas[2] << mas[1] << mas[0] << endl;
	return 0;
}


