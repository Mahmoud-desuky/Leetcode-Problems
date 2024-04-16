class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
         for(int i=0;i<9;i++){
             vector <int>frq(10);
             for(int j=0;j<9;j++)
             {
                 if(board[i][j]=='.')continue;
                 frq[board[i][j]-'0']++;
                 if(frq[board[i][j]-'0']>1)
                     return false;
             }
         }
         for(int i=0;i<9;i++){
             vector <int>frq(10);
             for(int j=0;j<9;j++)
             {
                 if(board[j][i]=='.')continue;
                 frq[board[j][i]-'0']++;
                 if(frq[board[j][i]-'0']>1)
                     return false;
             }
         }
        for(int i=0;i<9;i+=3)
        {
            vector <int>frq(10);
            for(int j=i;j<i+3;j++){
                for(int k=0;k<3;k++)
                {
                     if(board[j][k]=='.')continue;
                         frq[board[j][k]-'0']++;
                    if(frq[board[j][k]-'0']>1)
                         return false;
                }
            }
            frq=vector<int>(10);
            for(int j=i;j<i+3;j++){
                for(int k=3;k<6;k++)
                {
                     if(board[j][k]=='.')continue;
                         frq[board[j][k]-'0']++;
                    if(frq[board[j][k]-'0']>1)
                         return false;
                }
            }
         frq=vector<int>(10);
            for(int j=i;j<i+3;j++){
                for(int k=6;k<9;k++)
                {
                     if(board[j][k]=='.')continue;
                         frq[board[j][k]-'0']++;
                    if(frq[board[j][k]-'0']>1)
                         return false;
                }
            }
        }
        return true;
        }
         
};