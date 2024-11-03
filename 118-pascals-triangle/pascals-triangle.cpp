class Solution {
public:
    vector<int>generateRow(int row)
    {
        vector<int>temp;
        long long res=1;
        temp.push_back(1);
        for(int col=1;col<row;col++)
        {
            res=res*(row-col);
            res=res/col;
            temp.push_back(res);
        }
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++)
        {
            vector<int>res=generateRow(i);
            ans.push_back(res);
        }
        return ans;
    }
};