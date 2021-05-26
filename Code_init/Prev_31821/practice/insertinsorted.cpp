#include<iostream>
using namespace std;
int main(){
	int arr1[5];
		for(int l=0;l<5;l++){
			cin>>arr1[l];
	}
	int arr2[5];
	for(int l=0;l<5;l++){
			cin>>arr2[l];
	}
	int arr3[10];
	int i=0,j=0,k=0;
	while(i<5 && j<5){
		if(arr1[i]<arr2[j]){
			arr3[k]=arr1[i];
			i++,k++;
		}
		if(arr2[j]<arr1[i]){
			arr3[k]=arr2[j];
			j++,k++;
		}
	}
	for(;i<5;i++){
		arr3[k]=arr1[i];
		k++;
	}
		for(;j<5;j++){
		arr3[k]=arr2[j];
		k++;
	}
	
	for(int l=0;l<10;l++){
			cout<<arr3[l]<<' ';
	}
return 0;}
