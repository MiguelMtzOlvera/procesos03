#ifndef COMPLEJO_H
#define COMPLEJO_H
#include <iostream>
using namespace std;

class Complejo
{
	private:
		double real, imag;
	public:
		Complejo & inicia (double real=0.0, double imag=0.0);
		void Muestra();	
};
	
#endif
