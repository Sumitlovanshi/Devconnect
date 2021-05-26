#include<iostream>
using namespace std;
int count=0;
int get(int a){
	if(a>0){
		count++;
		get(a/10);
	
	}
	else
		return count;
}
int main(){
	int a;
	int c=0;
	cin>>a;
	c=get(a);
	cout<<c;
	return 0;
}
