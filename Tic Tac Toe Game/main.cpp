#include <iostream>
#include <conio.h>

using namespace std;
int choice, player;

class TicTacToe
{
private :
    char square[10] = { 'o', '1', '2', '3', '4', '5', '6', '7', '8', '9' };

public :
        int checkForWin();
        void displayBoard();
        void markBoard(char mark);
};

int main()
{
    int gameStatus;

    char mark;

    player = 1;

    TicTacToe T;

    do
    {
      T.displayBoard();

      // change turns
      player = (player % 2) ? 1 : 2;

      // get input
      cout<<"Player "<<player<<" enter a number: "<<endl;
      cin>>choice;

      // set the correct character based on player turn
      mark = (player == 1) ? 'X' : 'O';

      // set board based on user choice or invalid choice
      T.markBoard(mark);

      gameStatus = T.checkForWin();

      player++;

    }while (gameStatus == -1);

    if (gameStatus == 1)
        cout<<"==>\aPlayer"<<--player<<"  win "<<endl;
    else
        cout<<"==>\aGame draw"<<endl;

    return 0;
}

int TicTacToe :: checkForWin()
{
    int returnValue = 0;

    if (square[1] == square[2] && square[2] == square[3])
    {
        returnValue = 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
        returnValue = 1;

    else if (square[7] == square[8] && square[8] == square[9])
        returnValue = 1;

    else if (square[1] == square[4] && square[4] == square[7])
        returnValue = 1;

    else if (square[2] == square[5] && square[5] == square[8])
        returnValue = 1;

    else if (square[3] == square[6] && square[6] == square[9])
        returnValue = 1;

    else if (square[1] == square[5] && square[5] == square[9])
        returnValue = 1;

    else if (square[3] == square[5] && square[5] == square[7])
        returnValue = 1;

    else if (square[1] != '1' && square[2] != '2' && square[3] != '3' &&
        square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7]
        != '7' && square[8] != '8' && square[9] != '9')
        returnValue = 0;
    else
        returnValue = -1;

    return returnValue;
}

void TicTacToe :: displayBoard()
{
    system("cls");

    cout<<"\n\n\tTic Tac Toe\n\n"<<endl;

    cout<<"Player 1 (X)  -  Player 2 (O)\n\n\n";

    cout<<"     |     |     \n";
    cout<<"  "<<square[1]<<"  |  "<<square[2]<<"  |  "<<square[3]<<endl;

    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";

    cout<<"  "<<square[4]<<"  |  "<<square[5]<<"  |  "<<square[6]<<endl;

    cout<<"_____|_____|_____\n";
    cout<<"     |     |     \n";

    cout<<"  "<<square[7]<<"  |  "<<square[8]<<"  |  "<<square[9]<<endl;

    cout<<"     |     |     \n\n";
}

void TicTacToe :: markBoard(char mark)
{
    if (choice == 1 && square[1] == '1')
        square[1] = mark;

    else if (choice == 2 && square[2] == '2')
        square[2] = mark;

    else if (choice == 3 && square[3] == '3')
        square[3] = mark;

    else if (choice == 4 && square[4] == '4')
        square[4] = mark;

    else if (choice == 5 && square[5] == '5')
        square[5] = mark;

    else if (choice == 6 && square[6] == '6')
        square[6] = mark;

    else if (choice == 7 && square[7] == '7')
        square[7] = mark;

    else if (choice == 8 && square[8] == '8')
        square[8] = mark;

    else if (choice == 9 && square[9] == '9')
        square[9] = mark;
    else
    {
        cout<<"Invalid move ";

        player--;
        getch();
    }
}
