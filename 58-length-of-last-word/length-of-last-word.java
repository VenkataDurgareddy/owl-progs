class Solution {
    public int lengthOfLastWord(String s) {
        char[] ch=new char[s.length()];
        ch=s.toCharArray();
        int c=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(Character.isWhitespace(ch[i])&&c==0)
            {
                continue;
            }
            if(ch[i]==' '&& c>0)
            {
               break;
            }
            else
            {
                c++;
            }
        }
        return c;
        
    }
}