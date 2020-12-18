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
void Hiperbola::maximum(double start, double finish)
{
	double maxx = this->znachenie(start);
	for (double i = start + 1; i <= finish; i = i + 0.1)
	{
		if (maxx < this->znachenie(i))
			maxx = this->znachenie(i);
	}
	cout << maxx << endl;
}
void Hiperbola::minimum(double start, double finish)
{
	double minn = this->znachenie(start);
	for (double i = start + 1; i <= finish; i = i + 0.1)
	{
		//	cout << this->znachenie(i)<<endl;
		if (minn > this->znachenie(i))
			minn = this->znachenie(i);
	}
	cout << minn << endl;
}
