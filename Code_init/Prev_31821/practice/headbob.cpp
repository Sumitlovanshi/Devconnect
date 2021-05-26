#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int a,ha=0;
		cin>>a;
		char arr[a];
		for(int i=0;i<a;i++){
			cin>>arr[i];
		}
		for(int i=0;i<a;i++){
			if(arr[i]=='Y'){
				cout<<"NOT INDIAN"<<endl;
				break;
			}
			if(arr[i]=='I'){
				cout<<"INDIAN"<<endl;
				break;
			}
			if(arr[i]=='N'){
				ha++;
			}
		}
		if(ha==a){
			cout<<"NOT SURE"<<endl;
		}
	}
	return 0;
}
