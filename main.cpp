// extra library includes
#include <iostream> //input output stream
#include <string>   //string library

using namespace std; // standard namespace

int main()
{
    // all of our starter code will start here

    // output Banana Dungeon to the screen
    cout << "Banana Dungeon" << endl; // cout is short for console out and endl is short for end line
    cout << "Hello weary traveller, what is your name?" << endl;

    // variable to hold name of user/player
    // format of declaring a variable: datatype variableName;
    string name;

    // read name into name variable from the keyboard
    getline(cin, name); // Read a line of input including spaces

    cout << "Welcome to the Banana Dungeon, " << name << "." << endl;
    cout << "Are you prepared to enter? (y/n)" << endl;

    bool ready = false; // boolean variable to hold whether the user is ready or not
    char choice;        // character variable to hold the user's choice
    cin >> choice;      // read the user's choice into the choice variable

    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining characters in the input stream

    ready = (choice == 'y' || choice == 'Y');

    if (ready)
    {
        cout << "Very well then, but it is at your own risk that you descend into these depts!" << endl;
    }
    else
    {
        cout << "A wise choice!" << endl;
    }

    cin.ignore(); // Ignore the newline character in the input stream

    return 0; // return 0 to the operating system
}
