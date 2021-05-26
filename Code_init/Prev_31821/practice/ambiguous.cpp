#include<iostream>
using namespace std;
int main(){
	while(1){
		int a;
		cin>>a;
		if(a==0){
			break;
		}
		int arr[a];
		for(int i=0;i<a;i++){
			cin>>arr[i];
		}
		if(arr[0]==1){
			cout<<"ambiguous"<<endl;
		}
		else{
			cout<<"not ambiguous"<<endl;
		}
	}
	return 0;
}

