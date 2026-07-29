class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> rows,cols,boxes;
        for(int i=0;i<board.size();i++){
            for(int j=0;j<board[i].size();j++){
                char ch=board[i][j];
                if(ch=='.')continue;
                int boxNum=(i/3)*3 +(j/3);
                if(rows[i].count(ch) || cols[j].count(ch) 
                || boxes[boxNum].count(ch)){
                    return false;
                }
                rows[i].insert(ch);
                cols[j].insert(ch);
                boxes[boxNum].insert(ch);
            }
        }
        return true;
    }
};
