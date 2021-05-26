#include<iostream>
using namespace std;
int main(){
	int a;
	cin>>a;
	int ans;
	while(a){
	ans=a%10;
	cout<<ans;	
	a=a/10;
	}//cout<<ans<<endl;	
	return 0;
}

