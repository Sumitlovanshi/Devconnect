#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int n,count=0;
		n=a.size();
		//cout<<a<<endl<<b;
		for(int i=0;i<n;i++){
			if(a[i]==b[i] || a[i]=='?' || b[i]=='?'){
				count++;
			}
		}
		if(count==n){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
