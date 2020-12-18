#include<iostream>
#include<cmath>
#include<vector>
#include"Function.cpp"
#include"Polynom.cpp"
#include"Parabola.cpp"
#include"Hiperbola.cpp"
#include"Exponenta.cpp"
using namespace std;
int main()
{
	double x, start = -100, finish = 100;
	vector<double> vectors;
	vectors.push_back(3);
	vectors.push_back(-2);
	vectors.push_back(1);
	Polynom pol(vectors);
	Parabola par(3, -2, 4);
	Hiperbola hip(2,1);
	Exponenta exp(2.3);
	cout <<" Enter the x"<<endl;
	cin >> x;
	cout << "Parabola:" << endl << par.znachenie(x)<<endl;
	par.maximum(start, finish);
	par.minimum(start, finish);
	cout<< "Hiperbola:" << endl << hip.znachenie(x) << endl;
	hip.maximum(start, finish);
	hip.minimum(start, finish);
	cout << "Exponenta:" << endl << exp.znachenie(x) << endl;
	exp.maximum(start, finish);
	exp.minimum(start, finish);
	cout << "Polinom:" << endl << pol.znachenie(x) << endl;
	pol.maximum(start, finish);
	pol.minimum(start, finish);
	
	return 0;
}
