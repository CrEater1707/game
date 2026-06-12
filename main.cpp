#include <iostream>
#include <fstream>
#include "Witch.hpp"
#include "Swordmaster.hpp"
#include "Morph.hpp"
#include "Bowmaster.hpp"
#include "Necromancer.hpp"
#include "Giant.hpp"
#include "datasave.hpp"
using namespace std;

// Displays the available characters
void characters() {
    cout << "\n === Character information ===\n";
    cout << "1. Witch. A powerful character, whose powers come from ";
    cout << "different magic objects.\n";
    cout << "2. Swordmaster. A guy, who has got every possible knowledge ";
    cout << "about swords and is the best in sword fight.\n";
    cout << "3. Morph. He can transform in other creatures. He needs artefacts ";
    cout << "to transform and artefact shards to upgrade several forms.\n";
    cout << "4. Bowmaster. He never missed his target even from 1km distance. \n";
    cout << "5. Necromancer. She learnt the dark side of magic (necromancing) ";
    cout << "to use it with good objectives. \n";
    cout << "6. ";
    cout << "";
    
}

// Lets the player choose a story
void chooseStory() {
    int storyChoice;
    
    while(true) {
        cout << "\n === Choose story ===\n";
        cout << "1. Witch\n";
        cout << "2. Swordmaster\n";
        cout << "3. Morph\n";
        cout << "4. Bowmaster\n";
        cout << "5. Necromancer\n";
        cout << "6. \n";
        cout << "7. \n";
        cout << "8. \n";
        cout << "9. \n";
        cout << "10. \n";
        cout << "11. Back\n";
        cout << "Your choice: ";

        cin >> storyChoice;

        switch (storyChoice) {
            case 1:
                witchStory();
                break;
            case 2:
                swordmasterStory();
                break;
            case 3:
                morphStory();
                break;
            case 4:
                bowmasterStory();
                break;
            case 5:
                necromancerStory();
                break;
            case 6:
                story();
                break;
            case 11:
                return;
            default:
                cout << "\nInvalid choice. Choose a valid story (which is followed by story name)\n";
        }
    }
}

// Starts the play menu
void startGame() {
    int gameChoice;
    
    while(true) {
        cout << "\n1. New story\n";
        cout << "2. Load previous story (not available yet)\n";
        cout << "3. Characters\n";
        cout << "4. Back\n";
        cout << "Your choice: ";

        cin >> gameChoice;

        switch (gameChoice) {
            case 1:
                chooseStory();
                break;
            case 2:
                cout << "Option not available yet. Try another one.";
                break;
            case 3:
                characters();
                break;
            case 4:
                return;
        }
    }
}

// Opens settings menu
void settings() {
    cout << "\nSettings\n";
}

// Prints basic instructions
void instructions() {
    cout << "\n === Instructions ===\n";
    cout << "When you see a menu, you should start with the settings menu (by pressing 2). There are the most important ";
    cout << "options you could need for this game.\n";
    cout << "First you will see ";
}

// Prints help section
void help() {
    cout << "\nHelp\n";
}

// Main menu loop
void mainMenu() {
    int MMChoice;

    while (true) {
        cout << "\n === Main menu ===\n";
        cout << "1. Play\n";
        cout << "2. Settings\n";
        cout << "3. Instructions\n";
        cout << "4. Help\n";
        cout << "5. Exit\n";
        cout << "Your choice: ";

        cin >> MMChoice;

        switch (MMChoice) {
            case 1:
                startGame();
                break;
            case 2:
                settings();
                break;
            case 3:
                instructions();
                break;
            case 4:
                help();
                break;
            case 5:
                cout << "\nGoodbye! See you later!";
                return;
            default:
                cout << "\nWrong input. Enter valid number (one of numbers above)\n";
        }
    }
}

int main() 
{
    mainMenu();
}
