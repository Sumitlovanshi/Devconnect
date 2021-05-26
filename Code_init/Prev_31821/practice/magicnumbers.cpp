#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	cin>>s;
	int n=s.length();
	int i=n-1,flag=1;
	
	while(i >= 0){
		if(s[i]=='4' && s[i-1]=='4' && s[i-2]=='1'){
			i=i-3;
		}
		else if(s[i]=='4' && s[i-1]=='1'){
			i=i-2;
		}
		else if(s[i]=='1'){
			i--;
		}
		else{
			flag=0;
			break;
		}
	}
//	flag==1? cout<<"YES" : cout<<"NO";
	if(flag==1){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	cout<<endl;
	
	return 0;
}
