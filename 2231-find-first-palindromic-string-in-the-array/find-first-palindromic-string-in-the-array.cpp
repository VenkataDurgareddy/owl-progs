class Solution {
public:
    string firstPalindrome(vector<string>& words) {
        for(auto it:words)
        {
            string str=it;
            reverse(str.begin(),str.end());
            if(str==it)
            {
                return it;
            }
        }
        return "";
    }
};