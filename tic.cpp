//normal tic tac toe game with 2 players

#include <iostream>
using namespace std;

const int ROW = 3;
const int COLUMN = 3;

void startGame();
void printInstruction();
void takeinput(char matrix[ROW][COLUMN]);
bool checkForCrossWin(char matrix[ROW][COLUMN]);
bool checkForZeroesWin(char matrix[ROW][COLUMN]);
void printMatrix(char matrix[ROW][COLUMN]);

int main()
{
    startGame();

    return 0;
}

void startGame()
{
    char matrix[ROW][COLUMN];

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            matrix[i][j] = 0;
        }
    }
    printInstruction();
    takeinput(matrix);
}

void printMatrix(char matrix[ROW][COLUMN])
{
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << "|"
                 << " " << matrix[i][j] << " ";
        }
        cout << endl;
        cout << "-----------" << endl;
    }
}

void printInstruction()
{
    cout << "-----WELCOME TO TIC-TAC-TOE-----------" << endl;
    cout << "-----PLEASE READ THE INSTRUCTIONS BELOW------" << endl;
    cout << "BELOW IS THE POSITION NUMBER IN THE MATRIX" << endl;
    cout << endl;
    int num = 1;
    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            cout << "|"
                 << " " << num << " ";
            num++;
        }
        cout << endl;
        cout << "-----------" << endl;
    }

    cout << "ENTER THE NUMBER WHERE YOU WANT TO PLACE YOUR CROSS/ZEROES." << endl;
}

bool checkForCrossWin(char matrix[ROW][COLUMN])
{

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if ((matrix[0][0] == 'x' && matrix[0][1] == 'x' && matrix[0][2] == 'x') || (matrix[1][0] == 'x' && matrix[1][1] == 'x' && matrix[1][2] == 'x') || (matrix[2][0] == 'x' && matrix[2][1] == 'x' && matrix[2][2] == 'x') || (matrix[0][0] == 'x' && matrix[1][0] == 'x' && matrix[2][0] == 'x') || (matrix[0][1] == 'x' && matrix[1][1] == 'x' && matrix[2][1] == 'x') || (matrix[0][2] == 'x' && matrix[1][2] == 'x' && matrix[2][2] == 'x') || (matrix[2][0] == 'x' && matrix[1][1] == 'x' && matrix[0][2] == 'x') || (matrix[0][0] == 'x' && matrix[1][1] == 'x' && matrix[2][2] == 'x'))
            {
                return true;
            }
        }
    }
    return false;
};

bool checkForZeroesWin(char matrix[ROW][COLUMN])
{

    for (int i = 0; i < ROW; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if ((matrix[0][0] == 'o' && matrix[0][1] == 'o' && matrix[0][2] == 'o') || (matrix[1][0] == 'o' && matrix[1][1] == 'o' && matrix[1][2] == 'o') || (matrix[2][0] == 'o' && matrix[2][1] == 'o' && matrix[2][2] == 'o') || (matrix[0][0] == 'o' && matrix[1][0] == 'o' && matrix[2][0] == 'o') || (matrix[0][1] == 'o' && matrix[1][1] == 'o' && matrix[2][1] == 'o') || (matrix[0][2] == 'o' && matrix[1][2] == 'o' && matrix[2][2] == 'o') || (matrix[2][0] == 'o' && matrix[1][1] == 'o' && matrix[0][2] == 'o') || (matrix[0][0] == 'o' && matrix[1][1] == 'o' && matrix[2][2] == 'o'))
            {
                return true;
            }
        }
    }
    return false;
};

void takeinput(char matrix[ROW][COLUMN])
{
    int chances = 0, count = 0;
    cout << endl;
    //cout << "** 1 IS USED TO DISPLAY CROSS IN MATRIX **" << endl;
    //cout << "** 2 IS USED TO DISPLAY ZEROES IN MATRIX **" << endl;

    cout << endl;
    cout << "----GAME STARTS----" << endl;
    while (chances < 9)
    {
        int value;

        if (count == 0 || count == 2 || count == 4 || count == 6 || count == 8)
        {
            cout << "X's turn" << endl;
            cin >> value;
            if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 1)
            {
                matrix[0][0] = 'x';
                printMatrix(matrix);
                cout << endl;

                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 2)
            {
                matrix[0][1] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 3)
            {
                matrix[0][2] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 4)
            {
                matrix[1][0] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 5)
            {
                matrix[1][1] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 6)
            {
                matrix[1][2] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 7)
            {
                matrix[2][0] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 8)
            {
                matrix[2][1] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 0 || count == 2 || count == 4 || count == 6 || count == 8) && value == 9)
            {
                matrix[2][2] = 'x';
                printMatrix(matrix);
                cout << endl;
                if (checkForCrossWin(matrix))
                {
                    cout << "CROSS IS WINNER" << endl;
                    break;
                }
            }
            count++;
        }

        else if (count == 1 || count == 3 || count == 5 || count == 7 || count == 9)
        {
            cout << "O's turn" << endl;
            cin >> value;
            if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 1)
            {
                matrix[0][0] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 2)
            {
                matrix[0][1] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 3)
            {
                matrix[0][2] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 4)
            {
                matrix[1][0] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 5)
            {
                matrix[1][1] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 6)
            {
                matrix[1][2] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 7)
            {
                matrix[2][0] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 8)
            {
                matrix[2][1] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                    break;
                }
            }
            else if ((count == 1 || count == 3 || count == 5 || count == 7 || count == 9) && value == 9)
            {
                matrix[2][2] = 'o';
                printMatrix(matrix);
                cout << endl;
                if (checkForZeroesWin(matrix))
                {
                    cout << "ZEROES IS WINNER" << endl;
                }
            }

            count++;
        }
        chances++;
    }
}