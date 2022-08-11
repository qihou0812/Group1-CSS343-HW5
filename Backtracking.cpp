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

    bool checkCell(int row, int col, int num) {
        // check row
        for (int i = 0; i < SIZE; i++)
            if (this->grid[row][i].value == num) return false;

        // check column
        for (int i = 0; i < SIZE; i++)
            if (this->grid[i][col].value == num) return false;

        // check box
        for (int i = 0; i < SIZE; i++) {
            for (int j = 0; j < SIZE; j++) {

            }
        }

        return true;
    }

    void clearSudokuGrid() {
        if (this->grid != nullptr) {
            for (int i = 0; i < SIZE; ++i) {
                if (this->grid[i] != nullptr) delete [] this->grid[i];
                this->grid = nullptr;
            }

            delete [] this->grid;
            this->grid = nullptr;
        }
    }

    void createGrid() {
        if (this->grid == nullptr) this->grid = new SudokuElement*[SIZE];
        for (int i = 0; i < SIZE; i++)
            this->grid[i] = new SudokuElement[SIZE];
    }

    void createAndFillGrid() {
        this->createGrid();
        stringstream ss(this->puzzleText);
        vector<string> store;
        string temp {};
        while (ss >> temp) store.push_back(temp);
        for (int i = 0; i < SIZE; i++) {
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
    sudoku.printGrid();
}