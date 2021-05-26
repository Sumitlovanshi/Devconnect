#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(1){
		int t;
		cin>>t;
		if(t==0){
			break;
		}
		int arr[t];
		for(int i=0;i<t;i++){
			cin>>arr[i];
		}
		if(arr[0]==1){
			cout<<"ambiguous"<<endl;
		}
		else{
			cout<<"not ambiguous"<<endl;
		}
		
	}
}
