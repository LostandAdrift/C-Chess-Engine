#include <iostream>
#include <string>

class ChessBoard 
{
public:
    // Initialize board
    void initBoard()
    {
        // Initialize pawn positions
        for (int x = 0; x<8; x++)
        {
            board[1][x] = 'P';
            board[6][x] = 'P';
            /* for (int y=0; y<8; y++)
                board[x][y] = 'b'; */
        }
        // Initialize Rook Positions
        board[0][0] = 'R';
        board[0][7] = 'R';
        board[7][0] = 'R';
        board[7][8] = 'R';

        // Initialize Knight Positions
        board[0][1] = 'k';
        board[0][6] = 'k';
        board[7][1] = 'k';
        board[7][6] = 'k';

        // Initialize Bishop Positions
        board[0][2] = 'B';
        board[0][5] = 'B';
        board[7][2] = 'B';
        board[7][5] = 'B';
        
        // Initialize Queen Positions
        board[0][3] = 'Q';
        board[7][3] = 'Q';

        // Initialize King Positions
        board[0][4] = 'K';
        board[7][4] = 'K';
    
        // Fill empty space with star
        for (int x=0; x<8; x++)
        {
            for (int y=2; y<6; y++)
            {
                board[y][x] = '*';
            }
        }

    }

    // Prints Board to screen
    void printBoard()
    {
        for (int x=0; x<8; x++)
        {
            for (int y=7; y>=0; y--)
            {
                std::cout << board[x][y] ;
            }
            std::cout << std::endl;                
        }

    }

    // Moves piece from one place to another
    void movePiece(int xStart, int yStart, int xEnd, int yEnd)
    {
        //char tempChar = board[yStart][xStart];
        board[yEnd][xEnd] = board[yStart][xStart];
        board[yStart][xStart] = '*'; 
    }   

private:
    // Holds state of board
    char board[8][8];
};


/*
Keeps Track of pieces
P = pawn
KN = knight
Q = queen
KG = king
B = bishop
R = Rook 
*/


int main()
{
 // Create and initialize the game board
    ChessBoard gameBoard;
    gameBoard.initBoard();
    gameBoard.printBoard();
    std::cout << std::endl;    


    gameBoard.movePiece(0,1,4,4);
    gameBoard.printBoard();
}