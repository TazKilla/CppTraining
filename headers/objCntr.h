/*
    File name:          objCntr.h
    Creation date:      Monday 9th of November 2020
    Modification date:  09/11/2020
    Description:        written by Talkamynn Tuzlack as training purpose,
                        inspired from "Programmer en C++ moderne",
                        Eyrolles Editions
                        Header file for objCntr.cpp
*/

#ifndef OBJCNTR_H
#define OBJCNTR_H

class objCntr {
    public:
        objCntr();
        ~objCntr();
    private:
        static int cntr;
};

#endif