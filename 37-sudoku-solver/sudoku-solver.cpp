class Solution {
public:
    bool solver(vector<vector<char>> &board,int i,int j,int k)
    {
        for(int col=0;col<9;col++)
        {
            if(board[i][col]=='0'+k) return false;
        }
        for(int row=0;row<9;row++)
        {
            if(board[row][j]=='0'+k) return false;
        }
        int a=(i)/3;
        int b=(j)/3;
        for(int row=3*a;row<3*a+3;row++){
            for(int col=3*b;col<3*b+3;col++){
                if(board[row][col]=='0'+k) return false;
            }
        }
        return true;
    }
    bool sol(vector<vector<char>> & board){
        for(int i=0;i<9;i++)
        {
            for(int j=0;j<9;j++)
            {
                if(board[i][j]=='.')
                {
                  for(int k=1;k<=9;k++){
                    if(solver(board,i,j,k))
                    {
                        board[i][j]=k+'0';
                        if(sol(board)) return true;
                        board[i][j]='.';
                    }
                  }
                  return false; 
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sol(board);
    }
};