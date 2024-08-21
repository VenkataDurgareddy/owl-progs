class Solution {
public:
    int maximumSwap(int num) {
        string s=to_string(num);
        string ans=s;
        string temp=s;
        for(int i=0;i<s.length();i++)
        {
            for(int j=i+1;j<s.length();j++)
            {
                swap(temp[i],temp[j]);
                ans=max(ans,temp);
                temp=s;
            }
        }
       int num2=stoi(ans);
        return num2;
    }
};