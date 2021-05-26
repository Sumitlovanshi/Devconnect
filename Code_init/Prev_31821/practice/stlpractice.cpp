#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		map< string , int> m;
		for(int i=0;i<5;i++){
			int n;
			string s;
			cin>>n>>s;
			m.insert(make_pair(s,n));
		}
		//cout<<m[apple]<<endl;
		string a,b,c;
		cin>>a>>b>>c;
		cout<<m[a]<<" "<<m[b]<<" "<<m[c]<<endl;
	}
	return 0;
}




























/*

//priority_queue<int> pq;
		priority_queue< int,vector<int>, greater<int> > pq; 
		for(int i=0;i<5;i++){
			int n;
			cin>>n;
			pq.push(n);
		}
		while(!pq.empty()){
			cout<<pq.top()<<" ";
			pq.pop();
		}

*/




/*
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;	
		vector<int> v;
		for(int i=0;i<n;i++)
			v.push_back(i);
		cout<< *v.begin() <<" "<< *v.end() <<endl;
		for(int i=0;i<n;i++)
			cout<<v[i]<<" ";
		cout<<endl;
		cout<<sizeof(v);
		sort(v.begin(),v.end());
		for(int i=0;i<n;i++)
			cout<<v[i]<<" ";
		cout<<endl;
	}
	return 0;
}
*/
