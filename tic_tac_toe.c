#include <stdio.h>

char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};
int currentPlayer = 1; // 1 = Player 1, -1 = Player 2

void printBoard() {
    printf("\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf(" %c ", board[i][j]);
            if (j < 2) printf("|");
        }
        printf("\n");
        if (i < 2) printf("---|---|---\n");
    }
    printf("\n");
}

int checkWinner() {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2])
            return (board[i][0] == 'X') ? 1 : -1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i])
            return (board[0][i] == 'X') ? 1 : -1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2])
        return (board[0][0] == 'X') ? 1 : -1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0])
        return (board[0][2] == 'X') ? 1 : -1;

    return 0;
}

void makeMove() {
    int move;
    char mark = (currentPlayer == 1) ? 'X' : 'O';

    printf("Player %d, enter your move (1-9): ", currentPlayer);
    scanf("%d", &move);
    move--;

    if (move >= 0 && move < 9 && board[move / 3][move % 3] != 'X' && board[move / 3][move % 3] != 'O') {
        board[move / 3][move % 3] = mark;
        currentPlayer = -currentPlayer;  // Switch player
    } else {
        printf("Invalid move, try again.\n");
        makeMove();
    }
}

int main() {
    int winner = 0;

    while (winner == 0) {
        printBoard();
        makeMove();
        winner = checkWinner();
    }

    printBoard();
    printf("Player %d wins!\n", (winner == 1) ? 1 : 2);
    return 0;
}
