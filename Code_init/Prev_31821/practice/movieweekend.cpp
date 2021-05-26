#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int len[n],rat[n];
		for(int i=0;i<n;i++){
			cin>>len[i];
		}
		for(int i=0;i<n;i++){
			cin>>rat[i];
		}
		int m=0,mi=0;
		for(int i=0;i<n;i++){
			if( (len[i]*rat[i]) > m ){
				m=len[i]*rat[i];
				mi=i;
			}
			if( (len[i]*rat[i]) == m){
				if(rat[i]>rat[mi]){
					mi=i;
				}
			}
		}
		cout<<mi+1<<endl;		
	}
	return 0;
}
