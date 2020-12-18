#include<iostream>
#include "Exponenta.h"
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

Exponenta::Exponenta()
{
	con = 0;
}
Exponenta::Exponenta(double c1)
{
	con = c1;
}
double Exponenta::znachenie(double x)
{
	double ey;
	if (int(x) == x)
	{
		ey = 1;
		if (x > 0)
		{
			for (int i = 0; i < x; i++)
				ey = ey * E;
		}
		else
		{
			for (int i = 0; i < abs(x); i++)
				ey = ey / E;
		}
	}
	else
		ey = pow(E, x);
	return ey+con;
}
void Exponenta::maximum()
{
	cout << "Infinite" << endl;
}
void Exponenta::minimum()
{
	cout << this->con << endl;
}
