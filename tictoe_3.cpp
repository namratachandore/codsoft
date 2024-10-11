#include <iostream>
using namespace std;

class TicTacToe {
private:
    char board[3][3];   // 3x3 Game Board
    char currentPlayer; // 'X' or 'O'

public:
    
    TicTacToe() {
        initializeBoard();
        currentPlayer = 'X'; 
    }

    
    void initializeBoard() {
        int count = 1;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                board[i][j] = count + '0';  
                count++;
            }
        }
    }

   
    void displayBoard() {
        cout << "\n";
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                cout << " " << board[i][j] << " ";
                if (j < 2) cout << "|"; 
            }
            cout << "\n";
            if (i < 2) cout << "---|---|---\n"; 
        }
        cout << "\n";
    }

    
    void switchPlayer() {
        currentPlayer = (currentPlayer == 'X') ? 'O' : 'X';
    }

   
    bool checkWin() {
        
        for (int i = 0; i < 3; i++) {
            if (board[i][0] == board[i][1] && board[i][1] == board[i][2]) return true; 
            if (board[0][i] == board[1][i] && board[1][i] == board[2][i]) return true; 
        }
        
        if (board[0][0] == board[1][1] && board[1][1] == board[2][2]) return true; 
        if (board[0][2] == board[1][1] && board[1][1] == board[2][0]) return true; 

        return false;
    }

    
    bool checkDraw() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (board[i][j] != 'X' && board[i][j] != 'O') {
                    return false; 
                }
            }
        }
        return true;
    }

    
    void playerMove() {
        int move;
        bool validMove = false;
        while (!validMove) {
            cout << "Player " << currentPlayer << ", enter your move (1-9): ";
            cin >> move;

           
            int row = (move - 1) / 3;
            int col = (move - 1) % 3;

            
            if (move >= 1 && move <= 9 && board[row][col] != 'X' && board[row][col] != 'O') {
                board[row][col] = currentPlayer;
                validMove = true;
            } else {
                cout << "Invalid move! Please try again.\n";
            }
        }
    }

    
    void playGame() {
        bool gameWon = false;
        bool gameDraw = false;

        while (!gameWon && !gameDraw) {
            displayBoard();
            playerMove();
            gameWon = checkWin();
            if (!gameWon) {
                gameDraw = checkDraw();
                if (!gameDraw) {
                    switchPlayer(); 
                }
            }
        }

        displayBoard(); 
        if (gameWon) {
            cout << "Player " << currentPlayer << " wins!\n";
        } else if (gameDraw) {
            cout << "The game is a draw!\n";
        }
    }
};

int main() {
    char playAgain = 'y';
    while (playAgain == 'y') {
        TicTacToe game;
        game.playGame();
        cout << "Do you want to play again? (y/n): ";
        cin >> playAgain;
    }
    cout << "Thanks for playing!\n";
    return 0;
}
