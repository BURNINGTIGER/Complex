#include <iostream>
#include <conio.h>
#include <locale>
using namespace std;

class Complex
{
	double rel, img; 
	public:
	Complex();
	Complex(double real, double imag); 
	Complex add(const Complex) const;
	Complex sub(const Complex) const;
	Complex mult(const int) const;
	Complex divd(const int) const;

	Complex(const Complex&);
	Complex operator*(Complex&);
	Complex operator/(Complex&);
	bool operator==(Complex&);
	Complex operator=(Complex&);
	Complex operator+=(Complex&);
	Complex operator-=(Complex&);
	Complex operator*=(Complex&);
	Complex operator/=(Complex&);
	friend ostream& operator<<(ostream&, Complex&);
	friend istream& operator>>(istream&, Complex &);;
	

};
