#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int palin(string s,int n){
	int flag=0;
	for(int i=0;i < n ;i++){
        if(s[i] != s[n-i-1]){
            flag = 1;
            break;
        }
	}
	if(!flag){
		// NOT PALINDROME
		return 0;
	}
	else{
		// PALINDROME
		return 1;
	}
    	
}

int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int x = -1;
		int n=s.length();
		int a=palin(s,n);
		if(!a){
			cout<<"-1"<<endl;
			continue;
		}
		else{
			string p=s;
			for(int i=0;i<n;i++){
				p.erase(p.begin()+i);
				int q=palin(p,n-1);
				if(!q){
					x=i;
					break;
				}
				else{
					p=s;
				}
			}
		}
		cout<<x<<endl;
	}
	return 0;
}
