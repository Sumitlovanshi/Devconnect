#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n,c1=0,c2=0;
		n=s.size();
		for(int i=0;i<n;i++){
			if(s[i]=='a'){
				c1++;
			}
			else{
				c2++;
			}
		}
		c1=(c1<c2)?c1:c2;
		if(c1==0 || c2==0){
			cout<<"0"<<endl;
		}
		else{
			cout<<c1<<endl;
		}
	}
	return 0;
}
