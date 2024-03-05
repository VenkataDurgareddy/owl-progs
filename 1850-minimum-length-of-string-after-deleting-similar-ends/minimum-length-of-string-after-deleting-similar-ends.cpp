class Solution {
public:
    int minimumLength(string s) {
       int n = s.length();
       int i = 0;
       int j = n - 1;
       while (i < j) {
         if (s[i] == s[j]) {
             while (s[i] == s[i + 1] && i < j) {
                 i++;
             }
             while (s[j] == s[j - 1] && j > i) {
                 j--;
             }
         }
         else {
             break;
         }
         i++;
         j--;
       } 
       if(i>j)
       {
           return 0;
       }
       return abs(i-j)+1;
    }
};
