#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string a,b;
		cin>>a>>b;
		int n=a.size();
		int count=0;
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(a[i]==b[j]){
					count++;
					break;
				}
			}
		}
		if(count){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
	}
	return 0;
}
