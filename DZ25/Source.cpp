//������������ ������ ������� �++
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <algorithm>
using namespace std;

struct moves {
	string title;
	int year;
	string genre;
	int duration;
	int price;
};

moves m1 = { "Wild Nadya", 1983, "Erotic", 83, 50 }; moves* M1 = &m1;
moves m2 = { "Wild Lena", 1994, "XXX", 122, 25 }; moves* M2 = &m2;
moves m3 = { "Wild Elsa", 2005, "Pron", 32, 10 }; moves* M3 = &m3;

void showMovie(moves m) {
	cout << "�������� ������: " << m.title << endl;
	cout << "��� �������: " << m.year << endl;
	cout << "���� ������: " << m.genre << endl;
	cout << "����������������� ������: " << m.duration << endl;
	cout << "���� ������: " << m.price << endl;
	cout << endl;
}
moves expensive(moves a, moves b, moves c) {
	if(a.price > b.price && a.price > c.price)
		return a;
	else
	if (b.price > a.price && b.price > c.price)
		return b;
	else
		if (c.price > a.price && c.price > b.price)
			return c;
}
void updateInfo(moves &m) {
	int x;
	cout << "�������� ������ ��� ���������:\n\n" <<
		"1. ��������;\n" <<
		"2. ��� �������;\n" <<
		"3. ����;\n" <<
		"4. �����������������;\n" <<
		"5. ����.\n\n���� -> ";
	cin >> x;
	switch (x) {
	case 1: cout << "����� ��������: ";
		cin >> m.title;
		break;
	case 2: cout << "����� ��� �������: ";
		cin >> m.year;
		break;
	case 3: cout << "����� ����: ";
		cin >> m.genre;
		break;
	case 4: cout << "����� �����������������: ";
		cin >> m.duration;
		break;
	case 5: cout << "����� ����: ";
		cin >> m.price;
		break;
	default: cout << "������ �����"; break;
	}
}
int main() {
	setlocale(LC_ALL, "Russian");

	showMovie(m1);
	showMovie(m2);
	showMovie(m3);
	cout << "����� ������� ����� �� �������������x-" << expensive(m1, m2, m3).title << endl;
	updateInfo(m1);
	showMovie(m1);
	return 0;
}