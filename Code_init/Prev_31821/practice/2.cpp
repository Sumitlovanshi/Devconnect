#include<iostream>
using namespace std;
void get_value(int arr[],int n){
	if(n>0){
		cin>>arr[n];
		get_value(arr,n-1);
		
	}
	
}
void put_value(int arr[],int n){
	if(n>0){
		put_value(arr,n-1);
		cout<<arr[n];
	}
}
int mx=0;
	
int max(int arr[],int n){
	if(n>0){
		if(arr[n]>mx){
			mx=arr[n];
			}
		
	max(arr,n-1);
}
	else
		return mx;
}


int main(){
	int n;
	cin>>n;
	int b=0;
	int arr[n];
	get_value(arr,n);
	put_value(arr,n);
	b=max(arr,n);
	cout<<endl<<' '<<b;
	return 0;
}
