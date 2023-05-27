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
    // cin is short for console in
    cin >> name;
    getline(cin, name); // Read a line of input including spaces

    cout << "Welcome to the Banana Dungeon, " << name << "." << endl;
    cout << "Are you prepared to enter? (Press Enter to continue)" << endl;

    cin.ignore(); // Ignore the newline character in the input stream

    cout << "Very well then if it is your own demise you seek!" << endl;

    cin.ignore(); // Ignore the newline character in the input stream

    return 0; // return 0 to the operating system
}
