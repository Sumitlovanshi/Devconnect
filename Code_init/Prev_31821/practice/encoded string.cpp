#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s1,result="";
		long long int len,cnt=0,pu=1,ans=0;
		cin>>len>>s1;
		for(int i=len-1;i>=0;i--){
			ans += pu*(s1[i] - '0');
			pu *= 2;
			cnt++;
			if(cnt==4){
				char cha = (char)(97 + ans);
				result.push_back(cha);
				cnt=0,pu=1,ans=0;
			}
		}
		reverse(result.begin(),result.end());
		cout<<result<<endl;
	}
	return 0;
}


