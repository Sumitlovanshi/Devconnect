#include <iostream>
using namespace std;
int main() {
	int t;
	cin>>t;	
	while(t--)
	{
	    int n,sum=0,cnt=0,k=0;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        for(int j=i+1;j<n;j++)
	        {
	            k = arr[i] * arr[j];
	            sum=0;
	            while(k)
	            {
	                sum = sum + k%10;
	                k = k/10;
	            }
	            if(sum > cnt)
	            {
	                cnt= sum;
	            }
	        }
	    }
	    cout<<cnt<<endl;
	}
	return 0;
}

