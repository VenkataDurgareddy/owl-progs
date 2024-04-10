class Solution {
public:
    int maxVowels(string s, int k) {
        int i=0;
        int j=0;
        int vowels=0;
        int maxvowels=0;
        int len=s.length();
        while(j<len)
        {
             if(s[j]=='a' or s[j]=='e' or s[j]=='i' or s[j]=='o' or s[j]=='u')
            {
                vowels++;
            }
            if(j-i==k-1){
                maxvowels=max(vowels,maxvowels);
                 if(s[i]=='a' or s[i]=='e' or s[i]=='i' or s[i]=='o' or s[i]=='u')
            {
                vowels--;
            }
            i++;
            }
            j++;
    }
     return maxvowels;

        }
    };