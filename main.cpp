/*
    File name:          main.cpp
    Creation date:      Thursday 11th of June 2020
    Modification date:  09/11/2020
    Description:        written by Talkamynn Tuzlack as training purpose,
                        inspired from "Programmer en C++ moderne",
                        Eyrolles Editions
*/

// Standard libraries inclusion
#include <iostream>

// Custom libraries/files inclusion
#include "samples.h"
#include "headers/game.h"

using namespace std;

// Program's main function
int main() {
    // Variables declaration/initialization
    int i;
    int featureChoice, arg1, arg2;
    float x;
    float sqx;
    const int NTIME = 1;
    int evenOrOdd;
    int integer;
    float price;
    
    // Starting message
    cout << "################################################" << endl;
    cout << "#                    Hello                     #" << endl;
    cout << "#        This is a C++ training program        #" << endl;
    cout << "################################################" << endl << endl;

    // List of choices
    cout << "Please select an option from the list below:\n";
    cout << "0 - Objects counter class\n";
    cout << "1 - Square root calculation\n";
    cout << "2 - Calculator function\n";
    cout << "3 - Even or odd\n";
    cout << "4 - Integer binary pattern\n";
    cout << "5 - VAT and discount calculation\n";
    cout << "6 - \"By value\" argument transmission\n";
    cout << "7 - \"By reference\" argument transmission\n";
    cout << "8 - Test point.cpp class\n";
    cout << "9 - Play tic tac toe\n" << endl;

    // User selection
    cout << "Enter your choice from 0 to 9: ";
    cin >> featureChoice;

    // Behavior selection, depending on user's choice
    switch (featureChoice) {
        case 0:
            cout << "I'm going to run an objects counter class:\n";
            testObjCntrClass();
            break;
        case 1:
            cout << "I'm going to calculate " << NTIME << " square root(s).\n";

            for(i = 0; i < NTIME; i++) {
                
                cout << "Give a number: ";
                cin >> x;
                squareRoot(x);
            }
            break;

        case 2:
            calculator();
            break;

        case 3:
            cout << "Enter an integer to know if it's even or odd: ";
            cin >> evenOrOdd;
            parity(evenOrOdd);
            break;
        
        case 4:
            cout << "Enter an integer to show its binary pattern: ";
            cin >> integer;
            showBinary(integer);
            break;
        
        case 5:
            cout << "Enter an price to calculate VAT and discount: ";
            cin >> price;
            invoiceAndDiscount(price);
            break;
        
        case 6:
            cout << "Enter two integer to test the function: ";
            cin >> arg1 >> arg2;
            cout << "-- before exchange: " << arg1 << " & " << arg2 << endl;
            exchangeByVal(arg1, arg2);
            cout << "-- after exchange: " << arg1 << " & " << arg2 << endl;
            break;
        
        case 7:
            cout << "Enter two integer to test the function: ";
            cin >> arg1 >> arg2;
            cout << "-- before exchange: " << arg1 << " & " << arg2 << endl;
            exchangeByRef(arg1, arg2);
            cout << "-- after exchange: " << arg1 << " & " << arg2 << endl;
            break;
        
        case 8:
            testPointClass();
            break;

        case 9:
            run();
            break;

        default:
            break;
    }

    // End of program
    cout << "Program terminated.";
}