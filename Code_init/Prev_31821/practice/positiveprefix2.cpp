#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int n,k;
		cin>>n>>k;
		if(n==k)
		{
			for(int i=1;i<=n;i++)
				cout<<i<<" ";
			cout<<endl;
			continue;
		}
		else
		{
			int arr[n];
			if(n&1)
			{
				for(int i=0;i<n;i++)
				{
					arr[i]=(i+1)*pow(-1,i+2);
				}
			}
				else
				{
					for(int i=0;i<n;i++)
					{
						arr[i]=(i+1)*pow(-1,i+1);
					}
				}
				int sum=1,count,df=0;
				count= ceil((double)n/2);
				for(int i=1;i<n;i++)
				{
					sum+=arr[i];
					if(sum>0)
					{
						if(count<k)
						{
							df=k-count;
							for(int j=n-1;j>=0;j--)
							{
								if(arr[j]<0)
								{
									arr[j]=arr[j]*-1;
									count++;
									if(count==k)
									{
										break;
									}
								}
							}
						}
						else if(count>k)
						{
							df=count-k;
							for(int j=n-1;j>=0;j--)
							{
								if(arr[j]>0)
								{
									arr[j]=arr[j]*-1;
									count--;
									if(count==k)
									{
										break;
									}
								}
							}
						}
					}
				}
				for(int i=0;i<n;i++)
				{
					cout<<arr[i]<<" ";
				}
				cout<<endl;
			}
		}
	return 0;
}
