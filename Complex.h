#ifndef COMPLEX_H
#define COMPLEX_H
class Complex {
private:
	double real;
	double imag;
public:
	Complex();
	Complex(double real, double imag);
	Complex(const Complex& object);
	~Complex();
	void setData(double real, double imag);
	void getAbs();
	void printComplex();
};
#endif