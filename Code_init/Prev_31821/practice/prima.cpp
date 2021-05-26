#include<iostream>
using namespace std;
int main(){
		int a;
		cin>>a;
		int arr[a][a];
		for(int i=1;i<=a;i++){
			for(int j=1;j<=i;j++){
				cin>>arr[i][j];
			}
		}
		
		
		
		cout<<"answer is"<<endl;
		cout<<arr[1][1]<<endl;
			cout<<"answer is"<<endl;	
	for(int i=1;i<=a;i++){
			for(int j=1;j<=i;j++){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
}
