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
	double x;
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
	par.maximum();
	par.minimum();
	cout<< "Hiperbola:" << endl << hip.znachenie(x) << endl;
	hip.maximum();
	hip.minimum();
	cout << "Exponenta:" << endl << exp.znachenie(x) << endl;
	exp.maximum();
	exp.minimum();
	cout << "Polinom:" << endl << pol.znachenie(x) << endl;
	pol.maximum();
	pol.minimum();
	
	return 0;
}
