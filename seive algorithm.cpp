#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>v(n+1,1);
	    v[0]=0;
	    v[1]=0;
	    for(int i=2;i*i<=n;i++)
	    {
	        if(v[i]==1)
	        {
	            for(int j=i*i;j<=n;j+=i)
	            {
	                v[j]=0;
	            }
	        }
	    }
	    for(auto it:v)
	    {
	        cout<<it<<" ";
	    }
	    cout<<endl;
	}

}
