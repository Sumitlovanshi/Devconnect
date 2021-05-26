#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
	map <int , int > m;
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		m.insert(make_pair(a,b));
	}
	 map<int, int>::iterator itr,itr2;
	 for (itr = m.begin(); itr != m.end(); ++itr) { 
        cout << '\t' << itr->first 
             << '\t' << itr->second << '\n'; 
    } 
    cout<<endl;
    for (itr2 = m.end(); itr2 != m.begin(); --itr2) { 
        cout << '\t' << itr2->first 
             << '\t' << itr2->second << '\n'; 
    } 
	return 0;
}
