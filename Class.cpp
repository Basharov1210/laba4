#include "classes.h"


Child::Child() {
}

Child::Child(string name, string surname, int age) {
    this->name = name;
    this->surname = surname;
    this->age = age;
}
Child::Child(const Child &object) : name(object.name) , surname(object.surname) , age(object.age){
	cout << "Copied";
}

Child::~Child() = default;

int Child::getAge() {
    return this->age;
}
string Child::getSurName() {
    return this->surname;
}
string Child::getName() {
    return this->name;
}
void Child::setAge(int age) {
    this->age = age;
}
void Child::setSurName(string surname) {
    this->surname = surname;
}
void Child::setName(string name) {
    this->name = name;
}





////////////////////////////////////////////////////////////////////






Tiles::Tiles() {}

Tiles::Tiles(string brand, int size_h, int size_w, int price) {
    this->brand = brand;
    this->size_h = size_h;
    this->size_w = size_w;
    this->price = price;
}

Tiles::Tiles(const Tiles &object) : brand(object.brand) , size_h(object.size_h) , size_w(object.size_w) , price(object.price)  {
	cout << "It was copied";
}

Tiles::~Tiles() = default;

void Tiles::getData() {
    cout << "brand: "<< this->brand << ", " << "width: "<< this->size_w << ", " << "height: " << this->size_h << ", " << "price:" <<this->price << endl;
}





////////////////////////////////////////////////////////////////





Complex::Complex() {}

Complex::Complex(double real, double imag) {
    this->real = real;
    this->imag = imag;
}

Complex::Complex(const Complex &object): real(object.real) , imag(object.imag) {
	cout << "Copied";
}

Complex::~Complex() = default;

void Complex::printComplex() {
    if(this->im >= 0) cout << this->real <<"+"<<this->imag << "i" << endl;
    else cout << this->real <<"-"<<this->imag << "i" << endl;
}

void Complex::getAbs() {
    cout << "The Abs = "<<sqrt(this->real*this->real + this->imag*this->imag);
}

void Complex::setData(double real , double imag){
    this->real = real;
    this->imag = imag;
}



//////////////////////////////////////////////////////////////////////



Vector::Vector() {}

Vector::Vector(double x, double y) {
    this->x = x;
    this->y = y;
}

Vector::Vector(const Vector &object): x(object.x) , y(object.y) {
	cout << "Copied";
}

Vector::~Vector() = default;
void Vector::setValues(double x, double y) {
    this->x = x;
    this->y = y;
}

double Vector::get_X() {
    return this->x;
}

double Vector::get_Y() {
    return this->y;
}

void Vector::getAbs() {
    cout << "The Abs = "<<sqrt(this->x*this->x + this->y*this->y);
}

void Vector::sumVector(Vector vector) {
    this->x += vector.get_X();
    this->y += vector.get_Y();
}

void Vector::diffVector(Vector vector) {
    this->x -= vector.get_X();
    this->y -= vector.get_Y();
}