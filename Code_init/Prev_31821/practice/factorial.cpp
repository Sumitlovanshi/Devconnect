#include <iostream>
#include<bits/stdc++.h>
using namespace std;


int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    long long int n;
	    cin>>n;
	    long long int sum=1;
	    for(long long int i=1;i<=n;i++){
	        sum *=i;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
