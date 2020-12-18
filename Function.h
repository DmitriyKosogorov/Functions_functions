#pragma once
#ifndef Function_H
#define Function_H

const double E = 2.718281828;

class Function
{
public:
	virtual double znachenie(double x) = 0;
	virtual void maximum() = 0;
	virtual void minimum() = 0;
};

#endif