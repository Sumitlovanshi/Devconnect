#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,flag=0;
	cin>>n>>k;
	int a[n],i;
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(i=n-2;i>=0;i--){
		if(a[i]!=a[n-1])
		break;
	}
	if(i+1>=k)
	cout<<-1;
	else
	cout<<i+1;
	return 0;
}
