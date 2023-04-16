//
//  Fraction.hpp
//  GuidedPractice
//
//  Created by Sean Madzelonka on 4/9/23.
//

#ifndef Fraction_hpp
#define Fraction_hpp

#include <stdio.h>
#include <string>
class Fraction
{ private:
    int num; int den;
public:
    void setFraction (int n, int d);
    Fraction add(const Fraction &f);
    Fraction sub(const Fraction &f);
    Fraction multiply(const Fraction &f); // new function for multiplication
    Fraction divide(const Fraction &f); // new function for division
    int getNum() const;
    int getDen() const;
    void printFraction();
    
    
    //    Constructors
    Fraction();
    Fraction(int num, int den);
    Fraction(std::string input);
    
    //    Operator Overloads
    Fraction operator + (const Fraction &f);
    Fraction operator - (const Fraction &f);
    Fraction operator * (const Fraction &f);
    Fraction operator / (const Fraction &f);
    Fraction &operator = (const Fraction &f);
};

#endif /* Fraction_hpp */
