#include <iostream>
#include "classes.h"
int main() {
    int age1, age2;
    string name1 , name2, surname1, surname2;
    double re , im , x1, x2 , y1 ,y2;



    Tiles tiles1, tiles2;



    cout << "Enter the first child data:" ;
    cin >> name1 >> surname1 >> age1;
    Child child1 =  Child(name1 , surname1 , age1);
    cout << endl;
    cout << "Name is " << child1.getName() << ", Last Name is " << child1.getLastName() << ", Age is " << child1.getAge() << endl;

    cout << "Enter the second child data:" ;
    cin >> name2 >> surname2 >> age2;
    Child child2 = Child(name2 , surname2 , age2);
    cout << endl;
    cout << "Name is " << child2.getName() << ", Last Name is " << child2.getLastName() << ", Age is " << child2.getAge()<<std::endl;

    cout << "Enter the first Tiles data: ";
    cin >> tiles1.brand >> tiles1.size_h >> tiles1.size_w >> tiles1.price;
    tiles1.getData();


    cout << "Enter the second Tiles data: ";
    cin >> tiles2.brand >> tiles2.size_h >> tiles2.size_w >> tiles2.price;
    tiles2.getData();

    cout << "Enter the Complex number: ";
    cin >> real >> imag;
    Complex complex1 = Complex(real ,imag);
    complex1.printComplex();
    complex1.getAbs();

    cout << "Enter the first vector: ";
    cin >> x1 >> y1;
    Vector vector1 = Vector(x1, y1);

    cout << endl;

    cout << "Enter the second vector: ";
    cin >> x2 >> y2 ;
    Vector vector2 = Vector(x2 , y2);
    cout << endl;

    vector1.getAbs();
    vector2.getAbs();

    cout << endl;
    vector1.sumVector(vector2);
    cout << "The sum is" << vector1.get_X() <<" "<< vector1.get_Y();




    return 0;
}