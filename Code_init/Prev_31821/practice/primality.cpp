#include<iostream>
using namespace std;
int main(){
while(1){


	int a;
	cin>>a;
	int i=0,count=0;
	for(i=1;i<a;i++){
		if(a%i==0){
			count++;
		}
	}
	if(count==1){
		cout<<"PRIME";
	}
	else{
		cout<<"n0t prime";
	}
}
	return 0;
}
