class Solution {
public:
    string largestTimeFromDigits(vector<int>& arr) {
        string currhr="";
        string currmm="";
        string result="";
        for(int i=0;i<4;i++)
        {
            for(int j=0;j<4;j++)
            {
                for(int k=0;k<4;k++)
                {
                    if(i!=j and j!=k and k!=i)
                    {
                       currhr=to_string(arr[i])+to_string(arr[j]);
                       currmm=to_string(arr[k])+to_string(arr[6-i-j-k]);
                       string time=currhr+":"+currmm;
                        if(currhr<"24" and currmm<"60" and time>result)
                        {
                            result=time;
                        }
                    }
    
                }
            }
        }
       return result;
    }
};