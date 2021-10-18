// ConsoleApplication4.cpp: определяет точку входа для консольного приложения.
//

#include <iostream>
#include <conio.h>
using namespace std;


int main()
{
	setlocale(LC_ALL, "Russian");
	int a;
	cout << "Введите число от 1 до 9999: ";
	cin >> a;
	cout << "Ваше число: ";
	if (a < 1 || a>9999) {
		cout << "Неверное число";
		system("PAUSE");
	}
	switch (a / 1000)
	{
	case 1: cout << "Одна тысяча "; break;
	case 2: cout << "Две тысячи "; break;
	case 3: cout << "Тритысячи "; break;
	case 4: cout << "Четыре тысячи "; break;
	case 5: cout << "Пять тысяч "; break;
	case 6: cout << "Шесть тысяч "; break;
	case 7: cout << "Семь тысяч "; break;
	case 8: cout << "Восмь тысяч "; break;
	case 9: cout << "Девять тысяч "; break;
	}
	switch ((a % 1000) / 100)
	{
	case 1: cout << "сто "; break;
	case 2: cout << "двести "; break;
	case 3: cout << "триста "; break;
	case 4: cout << "четыреста "; break;
	case 5: cout << "пятьсот "; break;
	case 6: cout << "шестьсот "; break;
	case 7: cout << "семьсот "; break;
	case 8: cout << "восмьсот "; break;
	case 9: cout << "девятьсот "; break;
	}switch ((a % 100) / 10)
	{
	case 2: cout << "двадцать "; break;
	case 3: cout << "тридцать "; break;
	case 4: cout << "сорок "; break;
	case 5: cout << "пятьдесят "; break;
	case 6: cout << "шестьдесят "; break;
	case 7: cout << "семьдесят "; break;
	case 8: cout << "восемьдесят "; break;
	case 9: cout << "девяносто "; break;
	}
	if (a % 100 >= 10 && a % 100 < 20) {
		switch (a % 100) {
		case 10: cout << "десять "; break;
		case 11: cout << "одинадцать "; break;
		case 12: cout << "двенадцать "; break;
		case 13: cout << "тринадцать "; break;
		case 14: cout << "четырнадцать "; break;
		case 15: cout << "пятнадцать "; break;
		case 16: cout << "шестнадцать "; break;
		case 17: cout << "семнадцать "; break;
		case 18: cout << "восемнадцать "; break;
		case 19: cout << "девятнадцать "; break;
		}
	}
	else {
		switch (a % 10) {
		case 1: cout << "один "; break;
		case 2: cout << "два "; break;
		case 3: cout << "три "; break;
		case 4: cout << "четыре "; break;
		case 5: cout << "пять "; break;
		case 6: cout << "шесть "; break;
		case 7: cout << "семь "; break;
		case 8: cout << "восемь "; break;
		case 9: cout << "девять "; break;
		}
	}
	if (a % 100 >= 11 && a % 100 <= 19) {
		cout << "рублей\n";
	}
	else {
		switch (a % 10)
		{
		case 1: cout << "рубль\n"; break;
		case 2: case 3: case 4:  cout << "рубля\n"; break;
		default: cout << "рублей\n"; break;
		}
	}
	system("PAUSE");
	return 0;
}

