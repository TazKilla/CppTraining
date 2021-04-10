/*
    File name:          point.h
    Creation date:      Thursday 24th of July 2020
    Modification date:  01/08/2020
    Description:        written by Talkamynn Tuzlack as training purpose,
                        inspired from "Programmer en C++ moderne",
                        Eyrolles Editions
                        Header file for point.cpp
*/

#ifndef POINT_H
#define POINT_H

#include <iostream>

using namespace std;

class point {
        char letter;
        int x;
        int y;
    public:
        point();
        point(char, int);
        point(char, int, int);
        void move(int, int);
        void display(string = "");
        bool match(point);
        bool match(point*);
        bool matchRef(point&);
};

#endif