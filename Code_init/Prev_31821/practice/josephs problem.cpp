#include <iostream>
using namespace std;
int fun(int n,int k){
    if(n<=0){return n;}
return (fun(n-1,k)+(k-1))%n+1;
}

int main() {
	//code
	
	int t;
	cin>>t;
	while(t--)
	{
	int n,k;
	cin>>n>>k;
	int a;
	a=fun(n,k);
	cout<<a<<endl;
	
	}
	return 0;
}
