#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		float n,v1,v2;
		cin>>n>>v1>>v2;
		v1=(v1*(1.414));
		if(v2>v1){
			cout<<"Elevator"<<endl;
		}
		else{
			cout<<"Stairs"<<endl;
		}
	}
	return 0;
}
