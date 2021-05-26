#include<iostream>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--){
		string a;
		int n;
		getline(cin,a);
		n=a.size();
		//cout<<n<<endl;
		m=n/2;
		//cout<<m<<endl;
		char h[m],g[m];
		for(int i=0;i<m;i++){
			h[i]=a[i];
		}
		for(int j=m+1,i=0;j<n;j++,i++){
			g[i]=a[j];
		}
		int arr[26];
		
	}
	return 0;
}
