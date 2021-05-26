#include<iostream>
using namespace std;
//void insert(int no,int index){}
int main(){
	int length=10,size=10;
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
//	for(int i=0;i<10;i++){
//		cin>>arr[i];
	
	for(int i=0;i<10;i++){
		cout<<arr[i]<<' ';
	}
	int no,index;
	cin>>no>>index;
	
		if(index<=length){
			for(int i=length;i>index;i--){
				arr[i]=arr[i-1];
				
			}
			arr[index]=no;
		}
		
		//elif(index==length){
			
		
	
	//insert(n,m);
		for(int i=0;i<10;i++){
		cout<<arr[i]<<' ';
	}
	
	return 0;
}
