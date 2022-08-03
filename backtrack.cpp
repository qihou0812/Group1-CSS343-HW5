#include <vector>
using std::vector;
class backtrack{
    private:
    bool backtracking(vector<vector<char>>& board){
        //traverse the row
        for (int i = 0; i < board.size(); i++){
            //traverse the col
            for (int j = 0; j < board[0].size(); j++){
                if (board[i][j] != '.') continue;
                //check if it works we put the numbers 1-9 in that space
                for (char k = '1'; k <= '9'; k++){
                    if(isValid(i,j,k,board)){
                        board[i][j]=k;
                        //if we find one we return
                        if(backtracking(board))return true;
                        //not working backtrack it back to .
                        board[i][j]='.';
                    }
                }
                return false;//no solution betweeen 1-9
            }
        }
        return true;//we didin't return false which means there's a correct solution return true;
    }
    //check if it works when we put some number here
    bool isValid(int row, int col, char val, vector<vector<char>>& board){
        for (int i = 0; i < 9; i++) { 
        // check if there are same number in the same row
        if (board[row][i] == val) {
            return false;
        }
        //for the same col
        if(board[i][col]==val){
            return false;
        }
        //for same 3x3 area
        if(board[(row/3)*3+i/3][(col/3)*3+i%3]==val){
            return false;
        }
    }
    //pased all the check
    return true;
    }
    public:
    void solveSudoku(vector<vector<char>>& board){
        backtracking(board);
    }

};