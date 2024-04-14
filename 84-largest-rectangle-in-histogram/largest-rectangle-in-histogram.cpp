class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>leftstack;
        stack<int>rightstack;
        vector<int>left(heights.size());
        vector<int>right(heights.size());
        int i=0;
        //For finding the leftside boundaries
        while(i<heights.size())
        {
            if(leftstack.empty())
            {
                leftstack.push(i);
                left[i]=0;
                i++;
            }
            else
            {
                int k=leftstack.top();
                if(heights[k]>=heights[i])
                {
                        leftstack.pop();
                }
                else{
                    left[i]=k+1;
                    leftstack.push(i);
                    i++;
                }
            }
        }
        for(auto it:left)cout<<it<<" ";
        cout<<endl;
        //For finding the right side boundaries
        int j=heights.size()-1;
        while(j>=0)
        {
            if(rightstack.empty())
            {
                rightstack.push(j);
                right[j]=heights.size()-1;
                j--;
            }
            else
            {
                int k=rightstack.top();
                if(heights[k]>=heights[j])
                {
                        rightstack.pop();
                }
                else{
                    right[j]=k-1;
                    rightstack.push(j);
                    j--;
                }
            }
        }
        for(auto it:right)cout<<it<<" ";
        //finding the maximum area
        int maxarea=INT_MIN;
        for(int i=0;i<heights.size();i++)
        {
            int currarea=heights[i]*((right[i]-left[i])+1);
            maxarea=max(maxarea,currarea);
        }
        return maxarea;
    }
};