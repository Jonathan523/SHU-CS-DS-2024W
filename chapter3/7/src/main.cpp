#include <iostream>
#include "Polynomial.hpp"
using namespace std;

int main() {
    Polynomial poly;
    poly.addTerm(6, 3);
    poly.addTerm(5, 2); 
    poly.addTerm(4, 1); 
    poly.addTerm(3, 0); 
    cout << "6x^3+5x^2+4x+3="<<endl;

    double x = 0.0;
    cout << "please input the 'x':" << endl;
    cin >> x;
    cout << "The value of the polynomial at x = " << x << " is " << poly.calc(x) << endl;

    return 0;
}