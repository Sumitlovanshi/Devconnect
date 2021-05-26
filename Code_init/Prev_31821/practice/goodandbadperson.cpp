#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k,chef=0,brother=0;
		cin>>n>>k;
		string s;
		cin>>s;
		for(int i=0;i<n;i++){
			if(s[i]>=65 && s[i]<=90){
				brother++;
			}
			else{
				chef++;
			}
		}
		
	
	
	
	//	cout<<brother<<endl<<chef;
		
		
	}
	return 0;
}
