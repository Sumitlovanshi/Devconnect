#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
	int l,b;
	cin>>l>>b;
	long int a=l*b;
	for(int i=2;i<a;i++){
		if(a%(i*i)==0){
			cout<<(a/(i*i))<<endl;
			break;
			}
		}
	}
	return 0;
}
