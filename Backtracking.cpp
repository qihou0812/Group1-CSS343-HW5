#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

class Sudoku {
    struct SudokuElement {
        int value {};
        bool isValid {};
    };

    const int SIZE = 9;
    SudokuElement** grid {nullptr};
    string puzzleText {};

    // referenced from Qihou
    bool backtrack() {
        for (int row = 0; row < SIZE; ++row) {
            for (int col = 0; col < SIZE; ++col) {
                if (this->grid[row][col].isValid) continue;
                for (int num = 1; num < SIZE; ++num) {
                    if (checkNum(row, col, num)) {
                        this->grid[row][col].isValid = true;
                        this->grid[row][col].value = num;
                        if (backtrack()) return true;
                        this->grid[row][col].value = 0;
                        this->grid[row][col].isValid = false;
                    }
                }
                return false;
            }
        }

        return true;
    }

    bool checkNum(int row, int col, int num) {
        for (int i = 0; i < SIZE; i++) {
            // check row
            if (this->grid[i][col].value == num ||
            // check column
            this->grid[row][i].value == num ||
            // check block made by Qihou
            this->grid[(row/3)*3+i/3][(col/3)*3+i%3].value == num ||
            // check for invalid cell value
            this->grid[row][col].value == 0)
                return false;
        }
        this->grid[row][col].isValid = true;
        return true;
    }

    void clearSudokuGrid() {
        if (this->grid != nullptr) {
            for (int i = 0; i < SIZE; ++i) {
                delete [] this->grid[i];
                this->grid = nullptr;
            }

            delete [] this->grid;
            this->grid = nullptr;
        }
    }

    void createAndFillGrid() {
        if (this->grid == nullptr) this->grid = new SudokuElement*[SIZE];
        stringstream ss(this->puzzleText);
        vector<string> store;
        string temp {};
        while (ss >> temp) store.push_back(temp);
        for (int i = 0; i < SIZE; i++) {
            this->grid[i] = new SudokuElement[SIZE];
            for (int j = 0; j < SIZE; j++) {
                try {
                    this->grid[i][j].value = store[i][j] - '0';
                } catch (...) {
                    cout << "Error: input is not a number\n";
                    exit(0);
                }
            }
        }
    }

    public:
        Sudoku() {
            cout << "Please enter the puzzle text: ";
            string puzzle {};
            getline(cin >> ws, puzzle);
            this->puzzleText = puzzle;
            this->createAndFillGrid();
            cout << "Start:\n";
            this->printGrid();
            if (this->backtrack()) {
                cout << "Sudoku Solved:\n";
                this->printGrid();
            }
            else cout << "Sudoku not solved\n";
        }

        ~Sudoku() {
            this->clearSudokuGrid();
        }

        void printGrid() {
            for (int i = 0; i < SIZE; i++) {
                if (i % 3 == 0 || i == 0)
                    cout << "+-------+-------+-------+\n";
                cout << "| ";
                for (int j = 0; j < SIZE; ++j) {
                    if (j % 3 == 0 && j != 0) {
                        cout << "| " << this->grid[i][j].value << " ";
                    } else cout << this->grid[i][j].value << " ";
                }
                cout << "|\n";
            }
            cout << "+-------+-------+-------+\n";
        }
};

int main() {
    Sudoku sudoku;
}