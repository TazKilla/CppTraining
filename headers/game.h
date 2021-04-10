/*
    File name:          game.h
    Creation date:      Sunday 8th of November 2020
    Modification date:  09/11/2020
    Description:        written by Talkamynn Tuzlack as training purpose,
                        inspired from "Coding Magazine, Hors-série n°10",
                        Oracom Editions
                        Header file for game.cpp
*/

#ifndef GAME_H
#define GAME_H

#include <iostream>

using namespace std;

int checkWin(char square[]);
void drawBoard();
int run();

#endif