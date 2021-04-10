/*
    File name:          samples.cpp
    Creation date:      Thursday 11th of June 2020
    Modification date:  01/08/2020
    Description:        written by Talkamynn Tuzlack as training purpose,
                        inspired from "Programmer en C++ moderne",
                        Eyrolles Editions
*/

// Standard libraries inclusion
#include <iostream>
#include <cmath>

#include "headers/point.h"
#include "headers/objCntr.h"

using namespace std;

// Function meant to calculate "num" argument's square root (page 12)
void squareRoot(float num) {

    float sqNum;

    if(num < 0.0) {
        cout << num << " do not have square root.\n";
    } else {
        sqNum = sqrt(num);
        cout << sqNum << " is the square root of " << num << ".\n";
    }
}

// Function meant to run as partial calculator, only addition and multiplication
// are implemented for now (page 17)
void calculator() {
    char op;
    int n1, n2;

    cout << "Wanted operation (+, -, * or /) ? ";
    cin >> op;
    cout << "Give two integers: ";
    cin >> n1 >> n2;

    // Run arithmetic operation depending on user's selection, or just log it if
    // bad selection
    if (op == '+') {
        cout << "Their sum is: " << n1 + n2 << "\n";
    } else if (op == '-') {
        cout << "Their difference is: " << n1 - n2 << "\n";
    } else if (op == '*') {
        cout << "Their product is: " << n1 * n2 << "\n";
    } else if (op == '/') {
        cout << "Their quotient is: " << n1 / n2 << "\n";
    } else {
        cout << "Unknown character, leaving program...";
    }
}

// Function meant to say if given integer is odd or even (page 65)
void parity(int num) {
    if (num & 1 == 1) {
        cout << num << " is odd.\n";
    } else {
        cout << num << " is even.\n";
    }
}

// Function meant to display binary pattern for given integer
void showBinary(int num) {
    int div = 32768;
    int rest = num;

    while (rest > 0) {
        if (rest >= div) {
            cout << '1';
            rest -= div;
        } else {
            cout << '0';
        }
        div /= 2;
    }
    cout << '\n';
}

// Function meant to calculate ATI price and discount from given amount (page 82)
void invoiceAndDiscount(float amount) {
    const double VAT_RATE = 20.0;
    double discountRate;
    double ati = amount * ( 1. + VAT_RATE / 100.0);

    if (ati < 1000.)        discountRate = 0;
    else if (ati < 2000.)   discountRate = 1.;
    else if (ati < 3000.)   discountRate = 3.;
    else                    discountRate = 5.;

    double discount = ati * discountRate / 100.;
    double full = ati - discount;
    
    cout << "ATI price      = " << ati      << endl;
    cout << "Discount       = " << discount << endl;
    cout << "Price to pay   = " << full     << endl;
}

// Function meant to show argument transmission by value (page 110)
void exchangeByVal(int a, int b) {
    int c;
    cout << "-- starting exchange: " << a << " & " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "-- exchange done: " << a << " & " << b << endl;
}

// Function meant to show argument transmission by reference (page 113)
void exchangeByRef(int & a, int & b) {
    int c;
    cout << "-- starting exchange: " << a << " & " << b << endl;
    c = a;
    a = b;
    b = c;
    cout << "-- exchange done: " << a << " & " << b << endl;
}

// Function meant to run tests on custom class
void testPointClass() {
    point a('a', 1, 3);
    point b('b', 2, 6);
    point c('c', 3, 9);
    point d('d', 1, 3);

    a.display();
    b.display("Test 2");
    c.display("Test 3");
    d.display("Test 4");

    c.move(12, 8);

    if (a.match(b)) {
        cout << "Point b matches with point a." << endl;
    } else {
        cout << "Point b doesn't match with point a." << endl;
    }

    if (a.match(&d)) {
        cout << "Point d matches with point a." << endl;
    } else {
        cout << "Point d doesn't match with point a." << endl;
    }

    if (a.matchRef(c)) {
        cout << "Point c matches with point a." << endl;
    } else {
        cout << "Point c doesn't match with point a." << endl;
    }
}

void fnct() {
    objCntr u, v;
}

void testObjCntrClass() {
    objCntr a;
    fnct();
    objCntr b;
}

// Function meant to find a date after certain amount of days
//void findDate(int daysAmount,)