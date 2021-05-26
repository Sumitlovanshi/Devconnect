#include<iostream>
using namespace std;
int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int arr2[10];
	int i,j;
	for(i=9,j=0;i>=0;i--,j++){
		arr2[j]=arr[i];
	}
	for(i=0;i<10;i++){
		arr[i]=arr2[i];
	}
	for(i=0;i<10;i++){
		cout<<arr[i]<<' ';
	}
	return 0;
}
