#include<iostream>
using namespace std;
int main(){
	int arr[10];
	int i;
	for(i=0;i<10;i++){
		cin>>arr[i];
	}
	for(i=0;i<9;i++){
		if(arr[i]>arr[i+1]){
			cout<<"not sorted";
			return 0; 
		}
	}
	cout<<"array is sorted";
	return 1;
}

