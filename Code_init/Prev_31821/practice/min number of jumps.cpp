#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int jump=0;
    long long int i=0;
    int k=0;
    while(i<n-1){
        k = arr[i];
        i = i+k;
        jump++;
    }
    cout<<jump<<endl;
	
	return 0;
}

