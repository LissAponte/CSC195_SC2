#include <iostream>
#include "Fractions.h"
using namespace std;



int main() {
	
    mathlib::Fraction<int>fraction1{ 15, 5 };
    cout << fraction1 << std::endl;

    mathlib::Fraction <int> fraction2{ 15, 6 };
    fraction2.simplify();
    cout << fraction2 << std::endl;

   cout << fraction1 << " == " << fraction2 << " result: " << (fraction1 == fraction2) << std::endl;
    cout << fraction1 << " > " << fraction2 << " result: " << (fraction1 > fraction2) << std::endl;

    cout << fraction1 << " + " << fraction2 << " result: " << (fraction1 + fraction2) << std::endl;
    cout << fraction1 << " * " << fraction2 << " result: " << (fraction1 * fraction2) << std::endl;

    mathlib::Fraction <int> fraction3;
    cout << "input fraction (numerator - denominator): \n";
    cin >> fraction3;
    cout << fraction3 << std::endl;
    cout << fraction3.toDouble() << std::endl;

}