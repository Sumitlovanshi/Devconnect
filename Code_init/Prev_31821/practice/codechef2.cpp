#include<iostream>
using namespace std;
int main(){
	int z;
	cin>>z;
	while(z--){
		long int n,k;
		cin>>n>>k;
		long long int sum=0;
		long long int a;
		for(int i=0;i<n;i++){
			cin>>a;
			sum=sum+a;
		}
		a=sum/k;
		a++;
		cout<<a<<endl;
	}
	return 0;
}
