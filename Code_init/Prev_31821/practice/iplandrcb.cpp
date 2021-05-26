#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,ans=0;
		cin>>x>>y;
		if(x <= y){
			cout<<"0"<<endl;
		}
		else if((y*2)==x){
			cout<<y<<endl;
		}
		else{
			for(int i=1;i<=y;i++){
				ans=2*i + 1*(y-i);
				if(ans >= x){
					cout<<i<<endl;
					break;
				}
			}
		}
	}
	return 0;
}
