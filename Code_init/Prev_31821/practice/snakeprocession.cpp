#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		string s;
		cin>>s;
		int flag=0,a=0;
		for(int i=0;i<n;i++){
			if(flag != 1 && flag!=0){
				cout<<"Invalid"<<endl;
				a=4;
				break;
			}
			if(s[i]=='H'){
				flag++;
			}
			if(s[i]=='T'){
				flag--;
			}
		}
		if(a==0 && flag != 1){
			cout<<"Valid"<<endl;
		}
		else if(flag==1 && a==0){
			cout<<"Invalid"<<endl;
		}
	}
	return 0;
}
