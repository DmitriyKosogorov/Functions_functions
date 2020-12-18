#pragma once
#ifndef Exponenta_H
#define Exponenta_H
#include"Function.h"
using namespace std;

class Exponenta : public Function
{
private:
    double con;
public:
    Exponenta();
    Exponenta(double c1);
    double znachenie(double x);
    void maximum(double start, double finish);
    void minimum(double start, double finish);
};
#endif