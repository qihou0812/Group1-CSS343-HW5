#include "Puzzle.h"

Puzzle::Puzzle(const string& input) {
    this->puzzleText = input;
}

Puzzle::Puzzle(const vector<vector<char>>& puzzle) {
    this->grid = puzzle;
}

void Puzzle::setPuzzle(const string& input) {
    this->puzzleText = input;
}

string Puzzle::getPuzzle() const {
    return this->puzzleText;
}

/**
 * @brief 
 * 
 * @param input 
 */
void Puzzle::fillGrid() {
    std::stringstream ss(this->puzzleText);
    string temp {};
    vector<string> store;
    while (ss >> temp) store.push_back(temp);

    for (int i = 0; i < store.size(); i++) {
        vector<char> rowVector;
        this->grid.push_back(rowVector);
        for (int j = 0; j < store[i].size(); ++j) {
            int val = store[i][j] - '0';
            while (val == 0) val = rand() % 10;
            char cval = '0' + val;
            this->grid[i].push_back(cval);
        }
    }
}