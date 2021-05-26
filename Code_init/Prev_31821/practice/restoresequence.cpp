#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int b[n],a[n];
		for(int i=0;i<n;i++){
			cin>>b[i];
		}
		for(int i=0;i<n;i++){
			if(i%2==0){
				a[i]=i;
				a[b[i]-1]=i*2;	
			}
			else{
				a[i]=i;
				a[b[i]-1]=i*2;
			}
		}
		
		for(int i=0;i<n;i++){
			cout<<a[i]<<' ';
		}
		cout<<endl;
	}
	return 0;
}
