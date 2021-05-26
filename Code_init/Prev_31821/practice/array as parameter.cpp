#include<iostream>
using namespace std;
void fun(int ar[],int b){
	for(int i=0;i<b;i++){
		cout<<ar[i]<<endl;
	}
	
}
int main(){
	int arr[4]={2,3,5,7};
	fun(arr,4);
	return 0;
}
