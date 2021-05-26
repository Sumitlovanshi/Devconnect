#include<bits/stdc++.h>
using namespace std;

long long gcd(long long int a, long long int b)
{
  if (b == 0)
    return a;
  return gcd(b, a % b);
}
long long lcm(int a, int b)
{
    return (a / gcd(a, b)) * b;
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;	
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		sort(arr,arr+n);
		cout<<lcm(arr[0],arr[1])<<endl;
	}
	return 0;
}

