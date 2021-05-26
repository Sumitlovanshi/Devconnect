#include<iostream>
using namespace std;
int main(){
	int arr[10]={0,1,2,3,4,5,6,7,8,9};
	//to left shift an array 
	int n;
	cin>>n;
	
	while(n--)
	{
	
	int temp=arr[0];
	for(int i=0;i<9;i++){
		arr[i]=arr[i+1];	
	}
	arr[9]=temp;
	
}
	for(int i=0;i<10;i++){
		cout<<arr[i]<<' ';
		
	}

return 0;
}

