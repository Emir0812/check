﻿#include "pch.h"
#include <iostream>
#include <math.h>

using namespace std;

double getValue(char a)
{
	while(true)
	{
		cout << "Введите число " << a << " : ";
		double a;
		cin >> a;

		if (cin.fail())
		{
			cin.clear();
			cin.ignore(32767, '\n');
			cout << "Некорректный ввод данных. Пожалуйста введите число.\n";
		}
		else
		{
			cin.ignore(32767, '\n');
			return a;
		}
	}
}

float sidesArea() {
	double a, b, c, p, S;
	a = getValue('a');
	b = getValue('b');
	c = getValue('c');
	p = (a + b + c) / 2;
	S = sqrt(p*(p - a)*(p - b)*(p - c));
	cout << "S = " << S << "\n";
	return 0;
}

float coordinatesArea() {
	double x1, y1, x2, y2, x3, y3, A;
	cout << "Введите три пары вещественных чисел, каждая пара в отдельной строке. \n";
	cin >> x1 >> y1;
	cin >> x2 >> y2;
	cin >> x3 >> y3;
	A = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;
	cout << "S = " << A << "\n";
	return 0;
}

int main()
{
	setlocale(LC_ALL, "rus");
	while (true) {
		cout << "Выберите способ ввода параметров треугольника:\n"
			<< "\tВведите 1, если хотите ввести длины сторон a, b, c;\n"
			<< "\tВведите 2, если хотите ввести координаты вершин A, B, C;\n";
		int input_method;
		cin >> input_method;
		if (cin.fail()) {
			cin.clear();
			cin.ignore(32767, '\n');
		}
		else if (input_method == 1) {
			cin.ignore(32767, '\n');
			sidesArea();
			return 0;
		}
		else if (input_method == 2) {
			cin.ignore(32767, '\n');
			coordinatesArea();
			return 0;
		}
	}
}

