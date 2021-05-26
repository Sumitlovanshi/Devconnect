#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	int t;
	cin>>t;
	while(t--)
	{
	    string a;
	    cin>>a;
	    int n=a.size();
	    if(n%2!=0)
	    {
	        cout<<"No"<<endl;
	        
	    }
	    else if(a[0]==')' || a[n-1]=='(')
	        cout<<"No"<<endl;
	    else 
	        cout<<"yes"<<endl;
	    
	}
	
	return 0;
}