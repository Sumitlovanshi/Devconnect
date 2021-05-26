#include<iostream>
using namespace std;
int main(){
	int i,n;
	cin>>n;
	int temp=0;
	int count=0;
	int arr[1000];
	while(n>0){
		temp=n%10;
		n=n/10;
		arr[count]=temp;
		count++;
		cout<<temp<<' ';
	
	}
	cout<<endl<<count<<endl;
	int sum=arr[count-count]+arr[count-1];
	cout<<sum;
	return 0;
}
