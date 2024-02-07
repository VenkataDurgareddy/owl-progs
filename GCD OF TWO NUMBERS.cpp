#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    while(x!=0 and y!=0)
	    {
	        if(x>y)
	        {
	            x=x%y;
	        }
	        else{
	            y=y%x;
	        }
	    }
	    
	    if(x>0)
	    {
	        cout<<x<<endl;
	    }
	    else{
	    cout<<y<<endl;
	    }
	}

}
