// Lab_02.cpp
// <Паук Андрій Ігорович>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 21i

#include <iostream>
#include <cmath>

using namespace std;

int main() 
{
	double Pi = 4 * atan(1.0);

	double alpha = 1.0;

	double z1 = 2 * pow(sin((3 * Pi) - (2 * alpha)), 2) * pow(cos ((5 * Pi) + (2 * alpha)), 2); // результат обчислення першого виразу 
	
	double z2 = (1.0 / 4.0) - (1.0 / 4.0) * sin(((5.0 / 2.0) * Pi) - (8 * alpha)); // результат обчислення другого виразу

	cout << "z1=" << z1 << endl; // виведення результату обчислення першого виразу
	cout << "z2=" << z2 << endl; // виведення результату обчислення другого виразу
	cout << "z1=z2" << endl;
	
	system("pause");
	return 0;
}