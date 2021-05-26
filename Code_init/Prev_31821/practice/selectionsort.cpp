#include<iostream>
using namespace std;
void swap(int *x,int *y)
{
 int temp=*x;
 *x=*y;
 *y=temp;
}

void selection(int arr[],int n){
	int i,j,k;
	for(int i=0;i<n-1;i++){
		for(j=k=i;j<n;j++){
			if(arr[j]<arr[k]){
				k=j;
			}
			swap(&arr[i],&arr[k]);
		}
	}
}

int main(){
	int arr[10]={5,4,6,3,7,2,8,1,9,0};
	selection(arr,10);
		for(int i=0;i<10;i++){
		cout<<arr[i]<<' ';
	}
	return 0;
}
