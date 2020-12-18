#include<iostream>
#include "Parabola.h"
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

Parabola::Parabola()
{
	a = 1;
	b = 0;
	c = 0;
}
Parabola::Parabola(double a1, double b1, double c1)
{
	if (a1 == 0)
	{
		cout << "Error. parametr a to parabola equal to 0. changed to 1" << endl;
		a = 1;
	}
	else
		a = a1;
	b = b1;
	c = c1;
}
double Parabola::znachenie(double x)
{
	return a * x * x + b * x + c;
}
void Parabola::maximum(double start, double finish)
{
	double maxx = this->znachenie(start);
	for (double i = start + 1; i <= finish; i = i + 0.1)
	{
		if (maxx < this->znachenie(i))
			maxx = this->znachenie(i);
	}
	cout << maxx << endl;
}
void Parabola::minimum(double start, double finish)
{
	double minn = this->znachenie(start);
	for (double i = start + 1; i <= finish; i = i + 0.1)
	{
		if (minn > this->znachenie(i))
			minn = this->znachenie(i);
	}
	cout << minn << endl;
}
