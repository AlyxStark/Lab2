// ConsoleApplication4.cpp: ���������� ����� ����� ��� ����������� ����������.
//

#include "stdafx.h"
#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "������� ����� �� 1 �� 9999: ";
	cin >> a;
	cout << "���� �����: ";
	if (a < 1 || a>9999) {
		cout << "�������� �����";
		system("PAUSE");
		return 0;
	}
	switch (a / 1000)
	{
	case 1: cout << "���� ������ "; break;
	case 2: cout << "��� ������ "; break;
	case 3: cout << "��������� "; break;
	case 4: cout << "������ ������ "; break;
	case 5: cout << "���� ����� "; break;
	case 6: cout << "����� ����� "; break;
	case 7: cout << "���� ����� "; break;
	case 8: cout << "����� ����� "; break;
	case 9: cout << "������ ����� "; break;
	}
	switch (a / 100)
	{
	case 1: cout << "��� "; break;
	case 2: cout << "������ "; break;
	case 3: cout << "������ "; break;
	case 4: cout << "��������� "; break;
	case 5: cout << "������� "; break;
	case 6: cout << "�������� "; break;
	case 7: cout << "������� "; break;
	case 8: cout << "�������� "; break;
	case 9: cout << "��������� "; break;
	}switch ((a % 100) / 10)
	{
	case 2: cout << "�������� ";break;
	case 3: cout << "�������� ";break;
	case 4: cout << "����� ";break;
	case 5: cout << "��������� ";break;
	case 6: cout << "���������� ";break;
	case 7: cout << "��������� ";break;
	case 8: cout << "����������� ";break;
	case 9: cout << "��������� ";break;
	}
	if (a % 100 >= 10 & a % 100 < 20) {
		switch (a % 100) {
		case 10: cout << "������ ";break;
		case 11: cout << "���������� ";break;
		case 12: cout << "���������� ";break;
		case 13: cout << "���������� ";break;
		case 14: cout << "������������ ";break;
		case 15: cout << "���������� ";break;
		case 16: cout << "����������� ";break;
		case 17: cout << "���������� ";break;
		case 18: cout << "������������ ";break;
		case 19: cout << "������������ ";break;
		}
	}
	else {
		switch (a % 10) {
		case 1: cout << "���� ";break;
		case 2: cout << "��� ";break;
		case 3: cout << "��� ";break;
		case 4: cout << "������ ";break;
		case 5: cout << "���� ";break;
		case 6: cout << "����� ";break;
		case 7: cout << "���� ";break;
		case 8: cout << "������ ";break;
		case 9: cout << "������ ";break;
		}
	}
	if (a % 100 >= 11 && a % 100 <= 19) {
		cout << "������\n";
	}
	else {
		switch (a % 10)
		{
		case 1: cout << "�����\n";break;
		case 2: case 3: case 4:  cout << "�����\n";break;
		default: cout << "������\n"; break;
		}
	}
	system("PAUSE");
    return 0;
}

