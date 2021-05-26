#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define whl(n) int t;cin>>t;while(t--)
#define fo(n) for(int i=0;i<n;i++)

int main(){
/*
	#ifndef ONLINE_JUDGE
		freopen("input.txt" , "r" , stdin);
		freopen("output.txt" , "w" , stdout);
	#endif
*/
	string s;
	cin>>s;
	int n=s.length(),i=0,j=0;
	//char arr[200];
	while(i < n){
		if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
		{
			i=i+3;
			if(j==1){
				cout<<" ";
				j=0;

			}
		}
		else{
			cout<<s[i];
			j=1;
			i++;
		}
	}
	return 0;
}

