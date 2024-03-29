class Solution {
public:
    bool isRobotBounded(string ins) {
        int x=0;
        int y=0;
        char currdir='N';
        for(int i=0;i<ins.length();i++)
        {
            if(ins[i]=='G')
            {
                y+=currdir=='N'?1:0;
                y+=currdir=='S'?-1:0;
                x+=currdir=='E'?1:0;
                x+=currdir=='W'?-1:0;
            }
            else{
               char inc=ins[i];
               if(currdir=='N')
               {
                 currdir=inc=='L'?'W':'E';
               }
                else if(currdir=='S')
               {
                 currdir=inc=='L'?'E':'W';
               }
                else if(currdir=='W')
               {
                 currdir=inc=='L'?'S':'N';
               }
                else
               {
                 currdir=inc=='L'?'N':'S';
               }
             
            }
        }
        if((x==0 and y==0) or currdir!='N')
        {
            return true;
        }
        return false;
    }
};