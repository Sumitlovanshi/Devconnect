#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.length();
		int flag=1;
		//cout<<n<<endl;
		if(n<10){
			flag=0;
		}
		if(()(s[0] >= 97 && s[0] <= 122) || (s[0] >= 65 && s[0] <= 90) && (s[n-1] >= 97 && s[n-1] <= 122) || (s[n-1] >= 65 && s[n-1] <= 90)) 
	

	}
	return 0;
}


