#include<iostream>
using namespace std;
void fun(int a){
	if(a>0){
		//cout<<a;
		fun(a-1);
		cout<<a<<endl;
	}
}
int main(){
	int n=6;
	fun(n);
	return 0;
}
