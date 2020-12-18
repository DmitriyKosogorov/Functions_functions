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
void Parabola::maximum()
{
	if (a < 0)
		cout<<znachenie(-b / (2 * a))<<endl;
	else
		if (a > 0)
			cout << "Infinite"<<endl;
}
void Parabola::minimum()
{
	if (a > 0)
		cout<<znachenie(-b / (2 * a))<<endl;
	else
		if (a < 0)
			cout << "- Infinite" << endl;
}
