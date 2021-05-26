
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		int count=0,max=0;
		float n=s.size();
		for(int i=0;i<n;i++){
			count=0;
			for(int j=0;j<n;j++){
				//count=0;
				if(s[j]==s[i]){
					count++;
				}
			}
			if(count>max){
				max=count;
			}
		}
		n=n/2;
		if(max==n){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}

/*

#include<iostream>
#include<string>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int max=0;
		string s;
		cin>>s;
		float n=s.length();
		for(int x=0;x<n;x++){
			int k=0;
			for(int y=0;y<n;y++){
				if(s[y]==s[x]){
					k++;
				}
			}
			if(k>max){
				max=k;
			}
		}
		if(max==n/2){
			cout<<"YES\n";
		}else{
			cout<<"NO\n";
		}
	}
}
*/
