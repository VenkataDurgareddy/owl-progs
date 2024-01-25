class Solution {
public:
    int paircount=0;
    void merge(vector<int>&arr,int low,int mid,int high)
    {
        int total=0;
        int i=low;
        int j=mid+1;
        while(i<=mid)
        {
            while(j<=high and arr[i]>(long long)2*arr[j])
            {
                j++;
            }
            total+=(j-(mid+1));
            i++;
        }
        vector<int>temp;
         i=low;
         j=mid+1;
        while(i<=mid and j<=high)
        {
            if(arr[i]<arr[j])
            {
                temp.push_back(arr[i++]);
            }
            else{
                temp.push_back(arr[j++]);
            }
            
        }
        while(i<=mid)
        {
            temp.push_back(arr[i++]);
        }
        while(j<=high)
        {
            temp.push_back(arr[j++]);
        }
        for(int it=low;it<=high;it++)
        {
            arr[it]=temp[it-low];
        }
        paircount+=total;
        
    }
    void mergesort(vector<int>&arr,int low,int high)
    {
        if(low>=high)
        {
            return;
        }
        int mid=low+(high-low)/2;
        mergesort(arr,low,mid);
        mergesort(arr,mid+1,high);
        merge(arr,low,mid,high);
    }
    int reversePairs(vector<int>& nums) {
        int n=nums.size();
        mergesort(nums,0,n-1);
        return paircount;
    }
};