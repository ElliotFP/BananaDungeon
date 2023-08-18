#include "../Headers/Puzzles.h"
#include <iostream>
#include <string>

// Implementation files is where the full function or class is defined

int puzzle1()
{

    cout << "Puzzle 1! What is the capital of France?" << endl;
    string answer;
    getline(cin, answer);
    if (answer == "Paris" || answer == "paris")
    {
        cout << "Correct!" << endl;
        return 0;
    }
    else
    {
        cout << "Wrong!" << endl;
        return 1;
    }
};

int puzzle2()
{

    cout << "Puzzle 2! What is 7-2?" << endl;
    int answer;
    cin >> answer;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if (answer == 5)
    {
        cout << "Correct!" << endl;
        return 0;
    }
    else
    {
        cout << "Wrong!" << endl;
        return 1;
    }
};

int puzzle3(string name)
{
    cout << "Puzzle 3! What is your name?" << endl;
    string answer;
    getline(cin, answer);

    if (answer == name)
    {
        cout << "Correct!" << endl;
        return 0;
    }
    else
    {
        cout << "Wrong!" << endl;
        return 1;
    }
};
