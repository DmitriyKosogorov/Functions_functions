#include<iostream>
#include "Hiperbola.h"
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

Hiperbola::Hiperbola()
{
	num = 1;
	denum = 1;
}
Hiperbola::Hiperbola(double n, double d)
{
	if (d != 0)
	{
		num = n;
		denum = d;
	}
	else
	{
		cout << "Error. denominator equal to zero. changed to 1" << endl;
		num = n;
		d = 1;
	}
}
double Hiperbola::znachenie(double x)
{
	if (x != 0)
		return (num / (denum * x));
	else
		cout << "denominator equal to zero. "<<endl;
}
void Hiperbola::maximum()
{
	cout << "Infinite." << endl;
}
void Hiperbola::minimum()
{
	cout << "-Infinite" << endl;
}
