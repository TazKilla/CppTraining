/*
    File name:          point.cpp
    Creation date:      Thursday 23th of July 2020
    Modification date:  01/08/2020
    Description:        written by Talkamynn Tuzlack as training purpose,
                        inspired from "Programmer en C++ moderne",
                        Eyrolles Editions
*/

#include <iostream>
#include "../headers/point.h"

using namespace std;

point::point() : letter('o'), x(0), y(0) {}
point::point(char name, int abs) : letter(name), x(abs), y(abs) {}
point::point(char name, int abs, int ord) : letter(name), x(abs), y(ord) {}

void point::move(int dx, int dy) {
    cout << "Moving point " << letter << " from " << x << ":" << y << " to " << dx << ":" << dy << endl;
    x = dx;
    y = dy;
}

void point::display(string message) {
    string start;
    start = message == "" ? "Point " : " - Point ";
    cout << message << start << letter << " is on " << x << " " << y << endl;
}

bool point::match(point pt) {
    cout << "Running \"by value\" match(point pt) member's function:" << endl;
    return pt.x == x && pt.y == y;
}

bool point::match(point * pt) {
    cout << "Running \"by adress\" match(point * pt) member's function:" << endl;
    return pt -> x == x && pt -> y == y;
}

bool point::matchRef(point & pt) {
    cout << "Running \"by reference\" matchRef(point & pt) member's function:" << endl;
    return pt.x == x && pt.y == y;
}