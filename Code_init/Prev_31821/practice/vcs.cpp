#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int g=0;g<t;g++)
	{
	    int n,m,k;
	    scanf("%d%d%d",&n,&m,&k);
	    int tracked[100];
	    int ignored[100];
	    int un[n]={0};
	    int uning[n]={0};
	    for(int i=0;i<m;i++)
	    {
	        scanf("%d",&tracked[i]);
	    }
	    for(int i=0;i<k;i++)
	    {
	        scanf("%d",&ignored[i]);
	    }
	    for(int i=0;i<m;i++)
	    {
	        un[tracked[i]-1]=1;
	    }
	    for(int i=0;i<k;i++)
	    {
	        uning[ignored[i]-1]=1;
	    }
	    int count1=0,count2=0;
	    for(int i=0;i<n;i++)
	    {
	        if(un[i]==1 && uning[i]==1)
	        {
	            count1++;
	        }
	        else if(un[i]==0 && uning[i]==0)
	        {
	            count2++;
	        }
	    }
	    cout<<count1<<" "<<count2<<endl;
	    
	}
	return 0;
}
