class Solution {
public:
    int equalSubstring(string s, string t, int maxcost) {
        int i=0;
        int j=0;
        int ans=INT_MIN;
        int totalcost=0;
        while(i<s.length() and j<s.length() )
        {
            totalcost+=abs(int(s[j])-int(t[j]));
            if(totalcost>maxcost)
            {
                totalcost-=abs(int(s[i])-int(t[i]));
                i++;
            }
            ans=max(ans,(j-i)+1);
            j++;

        }
        return ans;
    }
};