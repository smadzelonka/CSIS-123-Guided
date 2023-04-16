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

Fraction::Fraction(){
    this->setFraction(1, 1);
};
Fraction::Fraction(int num, int den){
    this->setFraction(num, den);
};

Fraction::Fraction(string input) {
    stringstream ss(input);
    int num, den;
    ss >> num >> den;
    this->setFraction(num, den);
};


void Fraction::setFraction(int n, int d)
{
    this->num = n;
    this->den = d;
}

Fraction Fraction::add (const Fraction &f)
{
    Fraction tmp;
    tmp.num = (num * f.den) + (f.num * den) ;
    tmp.den = f.den * den;
    return tmp;
}
Fraction Fraction::sub(const Fraction &f)
{
    Fraction tmp;
    tmp.num = (this->num * f.den) - (f.num * f. den);
    tmp. den = f.den * this->den;
    return tmp;
}


Fraction Fraction::multiply(const Fraction &f)
{
    Fraction tmp;
    tmp.num = num * f.num;
    tmp.den = den * f.den;
    return tmp;
}

Fraction Fraction::divide(const Fraction &f)
{
    Fraction tmp;
    tmp.num = num * f.den;
    tmp.den = den * f.num;
    return tmp;
}

void Fraction::printFraction()
{
    cout << num << "/" << den << endl;
}

int Fraction::getDen() const
{
    return this->den;
}
int Fraction::getNum() const
{
    return this->num;
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
