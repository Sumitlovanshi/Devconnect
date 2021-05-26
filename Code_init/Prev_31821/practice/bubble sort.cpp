#include<iostream>
using namespace std;
int sap(int *a,int *b){
	int temp = *a;
	*a=*b;
	*b=temp;
	return 0;
}

void bubble(int arr[],int n){
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				sap( &arr[j] , &arr[j++] );
			}
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
	}
}

int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		cin>>arr[i];
	}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<' '<<endl;
	}
	bubble(arr,10);
	return 0;
}

