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
    void maximum(double start, double finish);
    void minimum(double start, double finish);
};
#endif