#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int b,l;
		cin>>l>>b;
		int bob=0,lim=0,i=1;
		while(true){
			if(i&1){
				lim=lim+i;
				i++;
				if(lim>l){
					cout<<"Bob"<<endl;break;
				}
			}
			else{
				bob=bob+i;
				i++;
				if(bob>b){
					cout<<"Limak"<<endl; break;	
				}
			}
		}
	}
	return 0;
}
