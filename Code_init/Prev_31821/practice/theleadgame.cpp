#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int a,b;
	int s1=0,s2=0;
	int maxa=0,maxb=0;
	while(n--){
		cin>>a>>b;
		s1+=a;
		s2+=b;
		if(s1>s2){
			if(maxa<(s1-s2)){
				maxa=s1-s2;
			}
		}
		else{
			if(maxb<(s2-s1)){
				maxb=s2-s1;
			}
		}
		
	}
	if(maxa>maxb){
		cout<<"1 "<<maxa;
	}
	else{
		cout<<"2 "<<maxb;
	}
	return 0;
}
