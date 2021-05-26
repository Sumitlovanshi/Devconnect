#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int n=s.size();
		int a=0,max=0;
		for(int i=0;i<n;i++){
			if(s[i]=='('){
				a++;
			}
			else{
				a--;
			}
			if(a>max)
			{
				max=a;
			}
		}
		for(int i=0;i<max;i++){
			cout<<'(';
		}
		for(int i=0;i<max;i++){
			cout<<')';
		}
		cout<<endl;
	}
	return 0;
}
