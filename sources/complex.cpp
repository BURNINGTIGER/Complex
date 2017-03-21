#include "complex.hpp"
#include <iostream>

using namespace std;

Complex Complex::add(const Complex b) const
{
	return Complex(rel + b.rel, img + b.img);
}
Complex Complex::sub(const Complex b) const
{
	return Complex(rel - b.rel, img - b.img);
}
Complex Complex::mult(const int i) const
{
	return Complex(rel * i , img * i);
}
Complex Complex::divd(const int j) const
{
	return Complex(rel / j, img / j);
}

Complex::Complex() 
{
	rel = 0;
	img = 0;
}

Complex::Complex(double real, double imag) 
{
	rel = real;
	img = imag;
}

double Complex::real()
{
	return rel;
}

double Complex::imag()
{
	return img;
}

Complex::Complex(const Complex& cc)
{
	rel = cc.rel;
	img = cc.img;
}

Complex Complex::operator*(Complex &c2) 
{
	Complex res;
	res.rel = ((rel * c2.rel)-(img*c2.img));
	res.img = ((img * c2.rel)+(rel*c2.img));
	return res;
}

Complex Complex::operator/(Complex &c2)
{
	Complex res;
	res.rel = ((rel * c2.rel)+(img*c2.img))/((c2.rel*c2.rel)+(c2.img*c2.img));
	res.img = ((img * c2.rel)-(rel*c2.img))/((c2.rel*c2.rel)+(c2.img*c2.img));
	return res;
}

bool Complex::operator==(Complex &cc)
{
	bool r=true;
	if ((rel != cc.rel) || (img != cc.img))
		r=false;
	return r;
}

Complex Complex::operator=(Complex&cc)
{
	rel = cc.rel;
	img = cc.img;
	return *this;
}

Complex Complex::operator+=(Complex &c2)
{
	rel += c2.rel;
	img += c2.imag;
	return *this;
}

Complex Complex::operator-=(Complex &c2)
{
	rel -= c2.rel;
	img -= c2.img;
	return *this;
}

Complex Complex::operator*=(Complex &c2)
{
 Complexres;
	res.rel = ((rel * c2.rel)-(img*c2.img));
	res.img = ((img * c2.rel)+(rel*c2.img));
  rel=res.rel;
  img=res.img;
	return *this;
}

Complex Complex::operator/=(Complex &copy)
{
Complex res;
	res.rel = ((rel * c2.rel)+(img*c2.img))/((c2.rel*c2.rel)+(c2.img*c2.img));
	res.img = ((img * c2.rel)-(rel*c2.img))/((c2.rel*c2.rel)+(c2.img*c2.img));
  rel=res.rel;
  img=res.img;
	return *this
}


ostream& operator <<(ostream& res, Complex& c2)
{
		res << c2.rel << " + " << c2.img << "*i" << endl;
}

