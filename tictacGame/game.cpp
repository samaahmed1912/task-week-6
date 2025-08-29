#include <iostream>
#include <string>
using namespace std;
char space[3][3] = {{'1','2','3'},{'4','5','6'},{'7','8','9'}};
int row;
int column;
char n = 'x';
bool tie = false;
string player1 = "";
string player2 = "";

void f1() /*This function plots the game coordinates*/
{
    cout << "   |   |   \n";
    cout << " " << space[0][0] << " | " << space[0][1] << " | " << space[0][2] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << space[1][0] << " | " << space[1][1] << " | " << space[1][2] << " \n";
    cout << "___|___|___\n";
    cout << "   |   |   \n";
    cout << " " << space[2][0] << " | " << space[2][1] << " | " << space[2][2] << " \n";
    cout << "   |   |   \n";
}

void f2()/* This function enters the player's movement*/
{
    int digit  ;
    if (n == 'x')
    {
        cout << player1 << " please enter";
        cin >> digit;
    }
    if (n == 'o')
    {
        cout << player2 << " please enter";
        cin >> digit;
    }
    if (digit == 1)
    {
        row = 0;
        column = 0;
    }
    if (digit == 2)
    {
        row = 0;
        column = 1;
    }
    if (digit == 3)
    {
        row = 0;
        column = 2;
    }
    if (digit == 4)
    {
        row = 1;
        column = 0;
    }
    if (digit == 5)
    {
        row = 1;
        column = 1;
    }
    if (digit == 6)
    {
        row = 1;
        column = 2;
    }
    if (digit == 7)
    {
        row = 2;
        column = 0;
    }
    if (digit == 8)
    {
        row = 2;
        column = 1;
    }
    if (digit == 9)
    {
        row = 2;
        column = 2;
    }
    else if (digit < 1 || digit > 9)
    {
        cout << "invalid input !!!! please try again\n";
    }
    if (n == 'x' && space[row][column] != 'x' && space[row][column] != 'o')
    {
        space[row][column] = 'x';
        n = 'o';
    }
    else if (n == 'o' && space[row][column] != 'x' && space[row][column] != 'o')
    {
        space[row][column] = 'o';
        n = 'x';
    }
    else {
        cout << "There is no empty space!" << endl;
        f2();
    }
  
}

bool f3() /*This function checks for a win or a draw*/
{
    for (int i = 0; i < 3; i++)
    {
        if (space[i][0] == space[i][1] && space[i][0] == space[i][2] || space[0][i] == space[1][i] && space[0][i] == space[2][i])
        {
            return true;
        }
        if (space[0][0] == space[1][1] && space[1][1] == space[2][2] || space[0][2] == space[1][1] && space[1][1] == space[2][0]) {

            return true;
        }

    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (space[i][j] != 'x' && space[i][j] != 'o')
            {
                return false;
            }
        }
    }
    tie = true;
    return false;
}

int main()
{
    cout <<"Welcome to XO game \n";
    cout << "How to play  \n";
    cout<< "The game is a grid with numbers from 1 to 9.\n";
    cout << "Each number represents a place on the board.\n";
    cout << "To place an X or O in a specific place, type the cell number you want.\n";
    cout << "The first player is X by default \n";
    cout << "Enter the name of the first player : \n";
    getline(cin, player1);
    cout << "Enter the name of the second player : \n";
    getline(cin, player2);
    cout << player1 << "is player1 so he/she will play first \n";
    cout << player2 << "is player2 so hq/she will play second| \n";

    while (!f3())
    {
        f1();
        f2();
        f3();
    }

    if (n == 'x' && tie == false)
    {
        cout << player2 << " Wins !! " << endl;
    }

    else if (n == 'o' && tie == false)
    {
        cout << player1 << " Wins !! " << endl;
    }
    else
    {
        cout << "It's a draw!" << endl;
    }
}