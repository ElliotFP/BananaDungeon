// extra library includes
#include <iostream> //input output stream
#include <string>   //string library
#include "../Headers/Puzzles.h"
#include "../Headers/Character.h"
#include "../Headers/Hero.h"
#include "../Headers/Monster.h"
#include "../Headers/Banana.h"
#include "../Headers/Communist.h"

using namespace std; // standard namespace

// main function
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

    if (!ready)
    {
        cout << "A wise choice!" << endl;

        return 0; // return 0 to the operating system
    }

    cout << "Very well then, but it is at your own risk that you descend into these depts!" << endl;

    cin.ignore(); // Ignore the newline character in the input stream

    // hero stats variables
    int health = 0, strength = 0, defense = 0, agility = 0;

    bool characterCreated = false;

    while (!characterCreated)
    {
        cout << "What type of hero are you?" << endl;
        cout << "1. Berzerker" << endl;
        cout << "2. Mage" << endl;
        cout << "3. Paladin" << endl;
        cout << "4. Rogue" << endl;
        cout << "5. Banana Cowboy" << endl;

        int choice = 0; // variable to hold the user's choice

        cin >> choice; // read the user's choice into the choice variable

        cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Ignore remaining characters in the input stream

        if (choice == 1) // if the user chose berzerker
        {
            health = 4;
            strength = 8;
            defense = 2;
            agility = 6;
        }
        else if (choice == 2) // if the user chose mage
        {
            health = 2;
            strength = 9;
            defense = 4;
            agility = 4;
        }
        else if (choice == 3) // if the user chose paladin
        {
            health = 6;
            strength = 6;
            defense = 6;
            agility = 2;
        }
        else if (choice == 4) // if the user chose rogue
        {
            health = 3;
            strength = 7;
            defense = 3;
            agility = 7;
        }
        else if (choice == 5) // if the user chose banana cowboy
        {
            health = 1;
            strength = 10;
            defense = 1;
            agility = 8;
        }
        else
        {
            cout << "Invalid choice! try again..." << endl;
        }
        if (choice >= 1 && choice <= 5)
        {
            characterCreated = true;
        }
    }

    // create a character
    Hero mainCharacter(health, strength, defense, agility, name);

    cout << "These are your stats, " << mainCharacter.getName() << endl;
    mainCharacter.printStats();

    cin.ignore(); // Ignore the newline character in the input stream

    cout << "Entering the dungeon in 10 " << endl;
    for (int i = 9; i >= 0; i--)
    {
        cout << i << "..." << endl;
    }

    cout << "Here we go!" << endl;
    cout << "Press Enter to continue..." << endl;

    cin.ignore(); // Ignore the newline character in the input stream

    // intro to functions and function calls
    cout << "You enter a large room with dim lighting. In front of you stands a slender figure in a cloak." << endl;
    cout << "Totally skull faced. He speaks:" << endl;
    cout << "Welcome to the Banana Dungeon, " << mainCharacter.getName() << ". I will ask you 3 questions with various punishments if you get them wrong..." << endl;

    int dmg = puzzle1() + puzzle2() + puzzle3(name);
    mainCharacter.takeDamage(dmg);

    cout << "You are inflicted " << dmg << " damage. Your health is now " << mainCharacter.gethp() << "/" << mainCharacter.gethpmax() << "." << endl;

    cout << mainCharacter.getlife() << ", you have passed the first test. You may continue..." << endl;

    if (!mainCharacter.getlife())
    {
        cout << "You have died!" << endl;
        return 0;
    }

    cout << "You have passed the first test. You may continue..." << endl;
    cout << "Press Enter to continue..." << endl;

    cin.ignore(); // Ignore the newline character in the input stream

    cout << "You walk through a narrow tunnel for what seems like an eternity and emerge into a dimly lit roo with a banana peal in the middle. " << endl;

    Banana BananaMonster(3, 3, 3, 3);

    // the banana monster uses slip;
    mainCharacter.takeDamage(BananaMonster.slip(mainCharacter.getagi()));

    if (!mainCharacter.getlife())
    {
        cout << "You have died!" << endl;
        return 0;
    }

    mainCharacter.printStats();
    cout << "You have survived the banana peal. You may eat the banana." << endl;
    mainCharacter.heal(BananaMonster.eat());
    mainCharacter.printStats();

    return 0; // return 0 to the operating system
}
