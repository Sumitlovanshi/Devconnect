#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int count=0;
		for(int i=0;i<n ; i++){
			if(s[i]=='1'){
				count++;
			}
		}
		int a=120-n;
		a += count;
	float b = (a*100)/120;
//		cout<<" "<<n<<""<<count<<" "<<b<<endl;
		if(b >= 75){
			cout<<"YES"<<endl;
		}  
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

