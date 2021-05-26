//check if n&(n-1)==1 then yes else no

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		int flag=1;
		if(n&1){
			flag=0;
		}
		for(long long int i=3;i<n/2;i+=2){
			if(n%i==0){
				flag=0;
				break;
			}
		}
		if(flag){
			cout<<"no"<<endl;
		}
		else{
			cout<<"yes"<<endl;
		}
	}
	return 0;
}
// correct solution below


/*
#include <bits/stdc++.h>

using namespace std;
using ll = long long;
using ld = long double;

void solve() {
  ll n;
  cin >> n;
  if (n & (n - 1)) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
*/
