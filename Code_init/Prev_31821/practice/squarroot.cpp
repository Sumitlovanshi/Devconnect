#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	while(n>0)
	{
		int a;
		cin>>a;
	//find the square root of a
	if(a==1 || a==2 || a==3){
		cout<<"direct 1"<<endl;
	}
	else {
	int arr[a];
	for(int i=0;i<a;i++){
		arr[i]=i;
	}
	int l=0,h=a,mid,temp=0;
	while(l<=h){
		mid=(l+h)/2;
		if(a==(arr[mid]*arr[mid])){
			cout<<"answer is perfect "<<mid<<endl;
			break;
			//return 0;
		}
		else if(a<(arr[mid]*arr[mid])){
			h=mid-1;
		}
		else if(a>(arr[mid]*arr[mid])){
			temp=l;
			l=mid+1;
		}
	
	
	}
	cout<<"answeer is fraction "<<temp<<endl;	}
			}
	return 0;
}
