//
//  main.cpp
//  GuidedPractice #3
//  4/16/23.
//  Sean Madzelonka
//  ID 0266099
//

#include <iostream>
#include "Fraction.hpp"

int main() {
    Fraction f1(1,2), f2(3,4), f3, f4, f5, f6("1 2");
//    f1.setFraction(1, 2);
//    f2.setFraction(3, 4);
//    f3 = f1.add(f2);
    f3 = f1 + f2;
    f3.printFraction();
//    f4 = f1.multiply(f2);
    f4 = f1 * f2;
    f4.printFraction();
//    f5 = f1.divide(f2);
    f5 = f1 / f2;
    f5.printFraction();
    f6.printFraction();
    return 0;
}
