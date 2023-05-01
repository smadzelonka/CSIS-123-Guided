//
//  Fraction.cpp
//  GuidedPractice
//
//  Created by Sean Madzelonka on 4/9/23.
//

#include "Fraction.hpp"
#include <iostream>
#include <sstream>
using namespace std;
using std::istream;
using std::ostream;


int Fraction::count = 0; // definition of static member variable

Fraction::Fraction(){
    this->create();
    this->setFraction(1, 1);
    count++; // increment counter
};
Fraction::Fraction(int num, int den){
    this->create();
    this->setFraction(num, den);
    count++; // increment counter
};

Fraction::Fraction(string input) {
    stringstream ss(input);
    int num, den;
    ss >> num >> den;
    this->setFraction(num, den);
};


void Fraction::create(){
    this->num = new int;
    this->den = new int;
};

Fraction::~Fraction() {
    delete this->num;
    delete this->den;
    count--; // decrement counter
}


void Fraction::setFraction(int n, int d)
{
    *this->num = n;
    *this->den = d;
}

Fraction Fraction::add (const Fraction &f)
{
    Fraction tmp;
    *tmp.num = (*this->num * *f.den) + (*f.num * *this->den) ;
    *tmp.den = *f.den * *this->den;
    return tmp;
}
Fraction Fraction::sub(const Fraction &f)
{
    Fraction tmp;
    *tmp.num = (*this->num * *f.den) - (*f.num * *f. den);
    *tmp. den = *f.den * *this->den;
    return tmp;
}


Fraction Fraction::multiply(const Fraction &f)
{
    Fraction tmp;
    *tmp.num = *this->num * *f.num;
    *tmp.den = *this->den * *f.den;
    return tmp;
}

Fraction Fraction::divide(const Fraction &f)
{
    Fraction tmp;
    *tmp.num = *this->num * *f.den;
    *tmp.den = *this->den * *f.num;
    return tmp;
}

void Fraction::printFraction()
{
    cout << *num << "/" << *den << endl;
}

int Fraction::getDen() const
{
    return *this->den;
}
int Fraction::getNum() const
{
    return *this->num;
}


Fraction Fraction::operator+(const Fraction &f){
    return this->add(f);
}


Fraction Fraction::operator-(const Fraction &f){
    return this->sub(f);
}

Fraction Fraction::operator*(const Fraction &f){
    return this->multiply(f);
}
Fraction Fraction::operator/(const Fraction &f){
    return this->divide(f);
}

Fraction &Fraction::operator=(const Fraction &f){
    this->setFraction(f.getNum(), f.getDen());
    return * this;
}
istream &operator >> (istream &input, Fraction &f){
    cout << "Enter a numerator" << endl;
    input >> *f.num;
    cout << "Enter a denominator" << endl;
    input >> *f.den;
    return input;
}

ostream &operator<<(ostream &output, Fraction &f) {
    output << *f.num << "/" << *f.den;
    return output;
}

