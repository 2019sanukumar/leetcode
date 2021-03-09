class Solution {
public:
    void solve(vector<vector<char>>& board) {
        if (board.empty()) return;
        
        for (int i = 0; i < board.size(); ++i) {
            expand(board, i, 0);
            expand(board, i, board[0].size()-1);
        }
        for (int j = 0; j < board[0].size(); ++j) {
            expand(board, 0, j);
            expand(board, board.size()-1, j);
        }
        
        for (int i = 0; i < board.size(); ++i)
            for (int j = 0; j < board[0].size(); ++j) {
                if (board[i][j] == 'O') board[i][j] = 'X';
                if (board[i][j] == 'B') board[i][j] = 'O';
            }
    }
    
    void expand(vector<vector<char>>& board, int i, int j) {
        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return;
        if (board[i][j] == 'O') {
            board[i][j] = 'B';
            expand(board, i+1, j);
            expand(board, i-1, j);
            expand(board, i, j+1);
            expand(board, i, j-1);
        }
    }
};
