#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void change(int i, int j, int arr[][3] , int n ){	
	for(int a=0;a<3;a++){
		arr[a][j] += n;
	}
	for(int a=0;a<3;a++){
		arr[i][a]+= n;
		
	}
	arr[i][j]-=n;
}

int main(){
	int arr[3][3]={0,0,0,0,0,0,0,0,0};
	int n;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			cin>>n;
			if(n>0){
				change(i , j , arr , n);
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(arr[i][j]%2==0){
				cout<<"1";
			}
			else{
				cout<<"0";
			}
		//	cout<<arr[i][j];
		}
		cout<<endl;
	}
	return 0;
}
