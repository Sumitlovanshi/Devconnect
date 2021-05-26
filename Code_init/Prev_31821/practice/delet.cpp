#include<iostream>
using namespace std;

void show(int arr[],int n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<' ';
		
	}
	cout<<endl;
}

int delet(int arr[],int length,int index){
	
	if(0<=index<length){
		int x=arr[index];
		for(int i=index;i<length-1;i++){
			arr[i]=arr[i+1];
		}
		length--;
		cout<<"Deleted "<<x<<endl;
	}
	return length;
	
}

int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int length=10;
	show(arr,length);
	int index;
	cin>>index;
	length=delet(arr,length,index);
	show(arr,length);
	return 0;
}
