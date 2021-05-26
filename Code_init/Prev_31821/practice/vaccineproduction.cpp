#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int d1,v1,d2,v2,p;
	cin>>d1>>v1>>d2>>v2>>p;
	int day=1,v=0;
	while(true){
		if(day >= d1){
			v += v1;
		}
		if(day >= d2){
			v += v2;
		}
		if(v >= p){
			break;
		}
		day++;
	}
	cout<<day<<endl;
	return 0;
}
