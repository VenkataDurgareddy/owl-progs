class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length())
        {
            return false;
        }
        string doub=s+s;
        return doub.find(goal)!=string::npos;
    }
};