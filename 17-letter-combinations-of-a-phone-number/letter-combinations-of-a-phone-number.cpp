class Solution {
public:
    void lettercomb(string digit,int ind,string mapping[10],vector<string>&ans,string a)
    {
        if(ind>=digit.size())
        {
           
            ans.push_back(a);
            return;
        }
        int digi=digit[ind]-'0';
        string mapp=mapping[digi];
        for(int i=0;i<mapp.length();i++)
        {
            a.push_back(mapp[i]);
            lettercomb(digit,ind+1,mapping,ans,a);
            a.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        vector<string>ans;
        string a;
        if(digits.length()==0)
        {
            return ans;    
        }
        string mapping[10]={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        lettercomb(digits,0,mapping,ans,a);
        return ans;

    }
};