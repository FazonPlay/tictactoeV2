#include <stdio.h>
#include "tictactoe.h"

int main() {
    char winner = ' ';

    resetBoard();
    while (winner == ' ' && checkFreeSpaces() != 0) {
        printBoard();

        playerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }

        computerMove();
        winner = checkWinner();
        if (winner != ' ' || checkFreeSpaces() == 0) {
            break;
        }
    }

    printBoard();
    printWinner(winner);

    return 0;
}
