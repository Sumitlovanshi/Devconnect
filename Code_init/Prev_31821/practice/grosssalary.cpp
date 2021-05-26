#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		float a,hra,da,gs;
		cin>>a;
		if(a<1500){
			hra=a*0.1;
			da=a*0.9;
		}
		else if(a>=1500){
			hra=500;
			da=a*.98;
		}
		gs=a+hra+da;
		cout<<gs<<endl;
	}
	return 0;
}
