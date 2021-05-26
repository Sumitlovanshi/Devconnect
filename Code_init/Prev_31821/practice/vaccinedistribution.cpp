#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,d,risk=0,norisk=0;
		cin>>n>>d;	
		int arr[n];
		for(int i=0;i<n;i++)
			cin>>arr[i];
		if(d==1){
			cout<<n<<endl;
			continue;
		}
		for(int i=0;i<n;i++){
			if( arr[i] >= 80 || arr[i] <= 9){
				risk++;
			}
			else{
				norisk++;
			}
		}
		
		int days=0;
		while(risk>0){
			risk -= d;
			days++; 
		}
		while(norisk>0){
			norisk -= d;
			days++;
		}
		cout<<days<<endl;
	}
	return 0;
}
