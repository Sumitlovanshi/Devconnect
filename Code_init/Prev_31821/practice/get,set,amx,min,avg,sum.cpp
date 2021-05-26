#include<iostream>
using namespace std;
void get(int key,int arr[]){
	cout<<"value at "<<key<<" is "<<arr[key];
}
void set(int index,int key,int arr[]){
	arr[index]=key;
	for(int i=0;i<10;i++){
		cout<<arr[i]<<' ';
	}
}
void max(int arr[]){
	int max=0;
	for(int i=0;i<10;i++){
		if(max<arr[i]){
			max=arr[i];
		}
		
	}
	cout<<"max is "<<max;
	
}
int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	int i,key,index;
	//cin>>key>>index;
	//get(key,arr);
	//set(index,key,arr);
	max(arr);
	return 0;
}
