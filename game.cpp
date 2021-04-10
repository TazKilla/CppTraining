/*
    File name:          game.cpp
    Creation date:      Sunday 8th of November 2020
    Modification date:  09/11/2020
    Description:        written by Talkamynn Tuzlack as training purpose,
                        inspired from "Coding Magazine, Hors-série n°10",
                        Oracom Editions
*/

#include <iostream>
#include "headers/game.h"

using namespace std;

char square[10] = {'0','1','2','3','4','5','6','7','8','9'};
char numChar[10] = {'0','1','2','3','4','5','6','7','8','9'};

int run() {
    int player = 1, i, choice;
    char mark;
    do {
        drawBoard();
        player = (player % 2) ? 1 : 2;

        cout << "Player " << player << ", please enter a number between 1 and 9: ";
        cin >> choice;
        mark = (player == 1) ? 'X' : 'O';
        bool goodMove = false;
        for (int j = 1; j < 10; j++)
        {
            if (choice == j && square[j] == numChar[j]) {
                square[j] = mark;
                goodMove = true;
            }
        }
        if (!goodMove) {
            cout << "Unauthorized move";
            player--;
            cin.ignore();
            cin.get();
        }
        i = checkWin(square);
        player++;
    } while (i == -1);
    drawBoard();
    if (i == 1) {
        cout << "==>\a Player " << --player << " win.";
    } else {
        cout << "==>\a Game draw";
    }
    cin.ignore();
    cin.get();
    return 0;
}

/* Function meant to return game state:
     1 - Game is done with result
    -1 - Game is running
     0 - Game is done without result */
int checkWin(char square[]) {
    if (square[1] == square[2] && square[2] == square[3]) {
        return 1;
    } else if (square[4] == square[5] && square[5] == square[6]) {
        return 1;
    } else if (square[7] == square[8] && square[8] == square[9]) {
        return 1;
    } else if (square[1] == square[4] && square[4] == square[7]) {
        return 1;
    } else if (square[2] == square[5] && square[5] == square[8]) {
        return 1;
    } else if (square[3] == square[6] && square[6] == square[9]) {
        return 1;
    } else if (square[1] == square[5] && square[5] == square[9]) {
        return 1;
    } else if (square[3] == square[5] && square[5] == square[7]) {
        return 1;
    } else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
                square[4] != '4' && square[5] != '5' && square[6] != '6' &&
                square[7] != '7' && square[8] != '8' && square[9] != '9') {
        return 0;
    } else {
        return -1;
    }
}

/* Function meant to draw board on the screen, with player's marks */
void drawBoard() {
    system("clear");
    cout << "\n\n\t Tic Tac Toe\n\n";
    cout << "Player 1 (X) - Player 2 (0)" << endl << endl;
    cout << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;
    cout << "_____|_____|_____" << endl;
    cout << "     |     |     " << endl;
    cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;
    cout << "     |     |     " << endl;
}