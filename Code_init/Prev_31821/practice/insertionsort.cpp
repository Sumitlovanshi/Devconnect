#include<iostream>
void insertion(int arr[],int n){
	int j,x;
	for(int i=1;i<n;i++){
		j=i-1;
		x=arr[i];
		while(j>-1 && arr[j]>x){
			arr[j+1]=arr[j];
			j--;
		}
		arr[j+1]=x;
	}
}

using namespace std;
int main(){
	int arr[10]={5,4,6,3,7,2,8,1,9,0};
	insertion(arr,10);
	for(int i=0;i<10;i++){
		cout<<arr[i]<<' ';
	}
	return 0;
}
