#include<iostream>
#include<string>
#include "Complejo.h"


int main() {
	Complejo x,w,m;
	Complejo y(4.3, 8.2);
	Complejo z(5.3, 7.2);
	x = y + z;
	cout << x;
	cout << "Ingrese Complejo de la forma a + bi"<<endl;
	cin >> w;
	cout << w;
	m = y * z;
	cout << m;
	return 0;
}

