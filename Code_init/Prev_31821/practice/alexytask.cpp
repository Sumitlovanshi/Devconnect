#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main() 
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    long a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    long ans=LONG_MAX;
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            long d=(a[i]*a[j])/__gcd(a[i],a[j]);
	            ans=min(ans,d);
	        }
	    }
	    cout<<ans<<endl;
	}
	return 0;
}

