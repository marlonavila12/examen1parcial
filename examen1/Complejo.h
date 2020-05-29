#pragma once
#include <iostream>
using namespace std;
#ifndef COMPLEJO_H
#define COMPLEJO_H

class Complejo {
public:
	explicit Complejo(double = 0.0, double = 0.0);

	friend ostream& operator<<(std::ostream& os, Complejo& c);
	friend istream& operator>>(std::istream& is, Complejo& c);

	Complejo operator+(const Complejo&)const;
	Complejo operator-(const Complejo&)const;
	Complejo operator*(const Complejo&)const;
	bool  operator==(const Complejo&)const;
	bool  operator!=(const Complejo&)const;
	double getReal();
	double getImaginario();
	void asignarComplejo(double r, double i);
private:
	double real;
	double imaginaria;
};

#endif // !



