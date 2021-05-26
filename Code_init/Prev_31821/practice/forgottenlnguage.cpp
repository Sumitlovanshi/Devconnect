#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		string s[n];
		int a1[n]={0};
		for(int i=0;i<n;i++){
			cin>>s[i];
		}
		int sum=0,q=0;
		static int p=0;
		string arr[2500];
		for(int i=0;i<k;i++){
			sum=sum+q;
			cin>>q;
			for(int j=0;j<q;j++){
				cin>>arr[p];
				p++;
			}
		}
		for(int i=0;i<n;i++){
			for(int j=0;j<sum;j++){
				if(s[i]==arr[j]){
					a1[i]++;
				}
			}
		}
		for(int i=0;i<n;i++){
			if(a1[i]==0){
				cout<<"YES"<<endl;
			}
			else{
				cout<<"NO"<<endl;
			}
		}
	}
	return 0;
}












#include<iostream>
#include<string>
using namespace std;
int main(){
	int t,n,k,l;
	cin>>t;
	while(t--){
		cin>>n>>k;
		string arr[n];
		string res[n];
		for(int x=0;x<n;x++){
			res[x]="NO";
		}
		for(int x=0;x<n;x++){
			cin>>arr[x];
		}
		string s;
		while(k--){
			cin>>l;
			while(l--){
				cin>>s;
				for(int x=0;x<n;x++){
					if(arr[x]==s){
						res[x]="YES";
					}
				}
			}
		}
		for(int x=0;x<n;x++){
			cout<<res[x]<<" ";
		}
	}
}
