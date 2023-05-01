//
//  main.cpp
//  GuidedPractice #6
//  4/21/23.
//  Sean Madzelonka
//  ID 0266099
//

#include <iostream>
#include "Fraction.hpp"
using namespace std;

int main() {
    Fraction f1, f2(3,4), f3;
    cin >> f1;
    cout << "Fraction f1: " << f1 << endl;
    f3 = f1 + f2;
    f3.printFraction();
    cout << "Number of instances of Fraction class: " << Fraction::getCount() << endl;
    return 0;
}
