#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,max=0,count=1;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(k==1){
			for(int i=0;i<n;i++){
				if(arr[i]%2==0){
					max=1;
				}
			}
		}
		for(int i=0;i<n-1;i++){
			if((arr[i]%2==0) && (arr[i+1]%2==0)){
				count++;
				if(count > max){
					max=count;
				}
			}
			else{
				count=1;
			}
		}
		if(max >= k ){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
