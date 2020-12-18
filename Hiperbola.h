#pragma once
#ifndef Hiperbola_H
#define Hiperbola_H
#include"Function.h"
#include <vector>
using namespace std;

class Hiperbola : public Function
{
private:
    double num, denum;
public:
    Hiperbola();
    Hiperbola(double n, double d);
    double znachenie(double x);
    void maximum();
    void minimum();
};
#endif