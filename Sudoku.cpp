#include "Sudoku.h"
using namespace std;

Sudoku::Sudoku(const int& population, const int& generation)
: population(population), generation(generation) {
    srand(time(NULL));
    cout << "Please input a puzzle: \n";
    string input {};
    std::getline(std::cin >> std::ws, input);
    this->fillGrid(input);
    this->printGrid();
}

void Sudoku::fillGrid(const string& input) {
    std::stringstream ss(input);
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

// 409806701 001307200 030009004 500030680 090000050 026080007 300100020 004603900 908402503
void Sudoku::printGrid() {
    for (int i = 0; i < this->grid.size(); i++) {
        if (i % 3 == 0 || i == 0) cout << "+-------+-------+-------+\n";
        cout << "| ";
        for (int j = 0; j < this->grid[i].size(); ++j) {
            if (j % 3 == 0 && j != 0) {
                cout << "| " << this->grid[i][j] << " ";
            } else cout << this->grid[i][j] << " ";
        }
        cout << "|\n";
    }
    cout << "+-------+-------+-------+\n";
}

void printGrid(const vector<vector<char>>& puzzle) {}