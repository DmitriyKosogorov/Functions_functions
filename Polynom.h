#pragma once
#ifndef Polynom_H
#define Polynom_H
#include"Function.h"
#include <vector>
using namespace std;

class Polynom : public Function
{
private:
    int n;
    vector<double> znach;
public:
    Polynom();
    Polynom(vector<double> mas);
    double znachenie(double x);
    void maximum(double start, double finish);
    void minimum(double start, double finish);
};
#endif