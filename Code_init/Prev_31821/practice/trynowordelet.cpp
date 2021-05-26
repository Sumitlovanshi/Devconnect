
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,k;
	    cin>>n>>k;
	    long int a[n],i,sum=0;
	    for(i=0;i<n;i++)
	        cin>>a[i] , sum += a[i];
	    long int k1=k , ans=0;
        sort(a,a+n);
        while(k1 > 0)
        {
            for(i=0;i<n;i++)
            {
                if(a[i] >= k1)
                {
                    k1 -= a[i];
                    a[i] = 0;
                    ans++;
                    break;
                }
                else if(i == n-1)
                {
                    k1 -= a[i];
                    a[i] = 0;
                    ans++;
                }
            }
            sort(a,a+n);
            if(k1 <= 0 || a[n-1] == 0)
                break;
	    }
	    if(a[n-1] == 0)
	        cout<<"-1"<<endl;
	    else 
	    {
	        reverse(a,a+n);
	        for(i=0;i<n;i++)
	        {
	            k -= a[i];
	            ans++;
	            if(k <= 0 || a[i] == 0)
	               break;
	        }
	        if(k <= 0)
	            cout<<ans<<endl;
	        else
	            cout<<"-1"<<endl;
	    }
	}
	return 0;

