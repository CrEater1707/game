#ifndef DATASAVE_HPP
#define DATASAVE_HPP

#include <iostream>
#include <fstream>

// Creates/clears the save file
inline void saveGame() {
    ofstream save("save.txt");
    save.close();
}

// Loads the save file
inline void loadGame() {
    std::ifstream save("save.txt");
    save.close();
}

#endif
