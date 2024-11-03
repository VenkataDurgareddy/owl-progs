class Solution {
public:
    bool isCircularSentence(string sentence) {
        char prev;
        bool flag=true;
        for(int i=0;i<sentence.length();i++)
        {
            if(sentence[i]==' ')
            {
                flag=false;
                if(prev!=sentence[i+1])
                {
                    return false;
                }
            }
            prev=sentence[i];
        }
            if(sentence[0]!=sentence[sentence.length()-1])
            {
                return false;
            }
        return true;
    }
};