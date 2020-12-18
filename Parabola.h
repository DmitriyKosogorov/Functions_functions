#pragma once
#ifndef Parabola_H
#define Parabola_H
#include"Function.h"
#include <vector>
using namespace std;

class Parabola : public Function
{
private:
    double a, b, c;
public:
    Parabola();
    Parabola(double a1, double b1, double c1);
    double znachenie(double x);
    void maximum();
    void minimum();
};
#endif