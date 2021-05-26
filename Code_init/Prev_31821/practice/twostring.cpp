#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string str1,str2;
		cin>>str1>>str2;
		int n,min=0,max=0,i=0;
		n=str1.size();
		for(i=0;i<n;i++){
			if(str1[i] != str2[i] && str1[i] != '?' && str2[i] != '?'){
				min++;
			}
			
		}
		for(i=0;i<n;i++){
			if(str1[i]=='?'){
				str1[i]='*';
			}
		}
			for(i=0;i<n;i++){
			if(str1[i]!=str2[i]){
				max++;
			}
		}
		cout<<min<<' '<<max<<endl;
	}
	return 0;
}
