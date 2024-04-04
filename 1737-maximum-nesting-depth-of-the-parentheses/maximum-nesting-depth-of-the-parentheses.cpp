class Solution {
public:
    int maxDepth(string s) {
        int maxDepth=0;
        int Depth=0;
        for(auto it:s)
        {
            if(it=='(')
            {
                Depth++;
                maxDepth=max(Depth,maxDepth);
            }
            else if(it==')'){
                Depth--;
            }
        }
        return maxDepth;
    }
};