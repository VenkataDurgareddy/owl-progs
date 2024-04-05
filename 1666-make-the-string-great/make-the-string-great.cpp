class Solution {
public:
    string makeGood(string s) {
        stack<char>st;
        for(auto it:s)
        {
            if(!st.empty() and abs(it-st.top())==32)
            {
                st.pop();
            }
            else{
                st.push(it);
            }
        }
        string goodstring="";
        while(!st.empty())
        {
            goodstring=st.top()+goodstring;
            st.pop();
        }
        return goodstring;
    }
};