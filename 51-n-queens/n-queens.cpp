class Solution {
public:
    bool issafe(int row,int col,vector<string>board,int n)
    {
        //upper diagonal
        int duprow=row;
        int dupcol=col;
        while(row>=0 and col>=0)
        {
            if(board[row][col]=='Q')return false;
            row--;
            col--;
        }
        //row
        row=duprow;
        col=dupcol;
        while(col>=0)
        {
            if(board[row][col]=='Q') return false;
            col--;
        }
        //lower diagonal
        row=duprow;
        col=dupcol;
        while(row<n and col>=0)
        {
            if(board[row][col]=='Q')return false;
            row++;
            col--;
        }
        return true;
    }
    void solve(int n,vector<string>board,vector<vector<string>>&ans,int col)
    {
        if(col==n)
        {
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++)
        {
            if(issafe(row,col,board,n))
            {
                board[row][col]='Q';
                solve(n,board,ans,col+1);
                board[row][col]='.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>board;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board.push_back(s);
        }
        solve(n,board,ans,0);
        return ans;
    }
};