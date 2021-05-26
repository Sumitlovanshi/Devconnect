#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,i1,j1;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>x;
			if(x==1){
				i1=i+1;
				j1=j+1;	
			}
		}
	}
	cout<<abs(i1-3)+abs(j1-3)<<endl;
	
	return 0;
}
