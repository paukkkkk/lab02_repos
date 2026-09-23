// Lab_02.cpp
// <Паук Андрій Ігорович>
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 21

#include <iostream>
#include <cmath>
using namespace std;
int main()

{

	double Pi = acos(-1.0);
	double z1;
	double z2;
	double a;

	cout << "a=";
	cin >> a;


	z1 = 2 * pow(sin((3 * Pi - 2 * a)), 2) * pow(cos((5 * Pi + 2 * a)), 2); // результат обчислення першого виразу

	z2 =  (1.0 / 4.0) - (1.0 / 4.0) * sin((5.0 / 2.0) * Pi - 8 * a); // результат обчислення другого виразу
	
	cout << endl;
	cout << "z1=" << z1 << endl;
	cout << "z2=" << z2 << endl;
	
	
	system("pause");

	return 0;

}