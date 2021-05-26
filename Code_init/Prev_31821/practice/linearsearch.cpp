//Program for liner search
#include<iostream>
using namespace std;
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,0};
	int key,i;
	cin>>key;
	for(i=0;i<10;i++){
		if(key==arr[i]){
			cout<<"found key at "<<arr[i];
			return 0;
		}
	}
	cout<<"not found";
	return 0;
}
