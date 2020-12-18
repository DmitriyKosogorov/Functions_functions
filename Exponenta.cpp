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
void Exponenta::maximum(double start, double finish)
{
	double maxx = this->znachenie(start);
	for (double i = start + 1; i <= finish; i = i + 0.1)
	{
		if (maxx < this->znachenie(i))
			maxx = this->znachenie(i);
	}
	cout << maxx << endl;
}
void Exponenta::minimum(double start, double finish)
{
	double minn = this->znachenie(start);
	for (double i = start + 1; i <= finish; i = i + 0.1)
	{
		if (minn > this->znachenie(i))
			minn = this->znachenie(i);
	}
	cout << minn << endl;
}
