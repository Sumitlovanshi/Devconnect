#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int digitcount(int n){
	int count = 0;
	while(n!=0)
	{
		int a=n%10;
		n=n%10;
		if(a==3){
		count++;
	}
		n=n/10;
	}
	return count;
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		n++;
		while(1){
			int s=digitcount(n);
			if(s>=3){
				break;
			}
			n++;
		}
		cout<<n<<endl;
	}
	return 0;
}
