#include<iostream>
using namespace std;
int main(){
		int arr[12]={1,2,4,8,16,32,64,128,256,512,1024,2048};
	int l=0,h=12;
	int key,mid;
	cin>>key;
	
	//for(int i=0;i<10;i++)
	while(l<=h){
		mid=(l+h)/2;
		if(key==arr[mid]){
			cout<<"found at "<<arr[mid];
			return 0;
			}
		else if(key<arr[mid]) {h=mid-1;
		}
		else{l=mid+1;}
}
	cout<<"not found";
	return 0;

}
