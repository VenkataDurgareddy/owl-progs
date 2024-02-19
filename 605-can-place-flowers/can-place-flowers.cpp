class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int n) {
        if(n==0) return true;
        if(arr.size()==1)
        {
        if(arr[0]==0)
        {
            arr[0]=1;
            n--;
        }
        }
        if(arr.size()>=2)
        {
            if(arr[0]==0 and arr[1]==0)
            {
                arr[0]=1;
                n--;
            }
        }
        for(int i=1;i<arr.size()-1;i++)
        {
            if(arr[i-1]==0 and arr[i+1]==0 and arr[i]!=1 and n!=0)
            {
                arr[i]=1;
                n--;
            }
            if(n==0)
            {
                break;
            }
           
        }
        if(arr[arr.size()-1]==0 and arr[arr.size()-2]==0 and n!=0)
        {
            n--;
        }
         if(n==0) return true;
        return false;
    }
};