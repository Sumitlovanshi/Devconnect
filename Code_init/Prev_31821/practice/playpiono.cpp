#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n,count=0;
		n=s.size();
		for(int i=0;i<n-1;i=i+2){
			if(s[i]==s[i+1]){
				count++;
			}
		}
		if(count==0){
			cout<<"yes"<<endl;
		}
		else{
			cout<<"no"<<endl;
		}
	}
	return 0;
}
