#include "Complejo.h"

Complejo::Complejo(double parteReal, double parteImaginaria):
	real(parteReal), imaginaria(parteImaginaria)
{
}

Complejo Complejo::operator+(const Complejo&operador2) const
{
	return Complejo(real + operador2.real, imaginaria+operador2.imaginaria);
}

Complejo Complejo::operator-(const Complejo&operador2) const
{
	return Complejo(real - operador2.real, imaginaria - operador2.imaginaria);
}

Complejo Complejo::operator*(const Complejo& c) const
{
	return Complejo((real*c.real)-(imaginaria*c.imaginaria),(real*c.imaginaria)+(imaginaria*c.real));
}

bool Complejo::operator==(const Complejo& c) const
{
	return real == c.real && imaginaria == c.imaginaria;
}

bool Complejo::operator!=(const Complejo& c) const
{
	return real != c.real || imaginaria != c.imaginaria;
}

double Complejo::getReal()
{
	return real;
}

double Complejo::getImaginario()
{
	return imaginaria;
}

void Complejo::asignarComplejo(double r, double i)
{
	real = r;
	imaginaria = i;
}

ostream& operator<<(std::ostream& os, Complejo& c)
{
	// TODO: Insertar una instrucción "return" aquí
	os << '(' <<  c.getReal()<<"+"<<c.getImaginario()<<"i"<<')'<<endl;
	return os;
}

istream& operator>>(std::istream& is, Complejo& c)
{
	// TODO: Insertar una instrucción "return" aquí
	double r, i;
	char Caracter;
	is >> r >> Caracter >> i;
	c.asignarComplejo(r, i);
	return is;

}
