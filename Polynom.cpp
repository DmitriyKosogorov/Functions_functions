#include<iostream>
#include "Polynom.h"
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

Polynom::Polynom()
{
	n = 0;
	znach.push_back(1);
}
Polynom::Polynom(vector<double> mas)
{
	n = mas.size()-1;
	for (int i = 0; i <= n; i++)
		znach.push_back(mas[i]);
}
double Polynom::znachenie(double x)
{
	int step = n,j,i;
	double x1=1, result=0;
	for (i = 0; i < znach.size(); i++)
	{
		x1 = 1;
		for (j = 0; j < step; j++)
			x1 = x1 * x;
		result = result + znach[i] * x1;
		step--;
	}
	return result;
}
void Polynom::maximum(double start, double finish)
{

	double maxx = this->znachenie(start);
	for (double i = start + 1; i <= finish; i=i+0.1)
	{
		if (maxx < this->znachenie(i))
			maxx = this->znachenie(i);
	}
	cout << maxx << endl;
}
void Polynom::minimum(double start, double finish)
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
