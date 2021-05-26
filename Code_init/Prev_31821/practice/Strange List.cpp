#include<iostream>
#include<bits/stdc++.h>
#define ll long long int
#define pb push_back
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		ll n,x,s=0,i=0;
		cin>>n,x;
		vector<pair<int,int>> v;
		for(int i=0;i<n;i++){
			int a;
			cin>>a;
			v.push_back({a,1});
		}
		for(int i=0;i<v.size() ; i++){
			if(v[i].first%x==0){
				v.pb({ v[i].first/x , x*v[i].second });
			}
			else{
				break;
			}
		}
		for(int i=0;i<v.size() ;i++){
			s += v[i].first*v[i].second;
		}
		cout<<s<<endl;
	}
	return 0;
}


