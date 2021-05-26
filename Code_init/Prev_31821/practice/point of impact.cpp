#include<bits/stdc++.h>
using namespace std;
int main() {
	long long int t;
	cin>>t;
	while(t--)
	{
	    long long int n,k,x,y;
	    cin>>n>>k>>x>>y;
	    
	   if(x==y){
	       cout << n<<" "<<n<<endl;
	    }
	   else if(x>y){
	       vector<pair<long long int,long long int>>v;
	       v.push_back(make_pair(n,n-x+y));
	       v.push_back(make_pair(n-x+y,n));
	       v.push_back(make_pair(0,x-y));
	       v.push_back(make_pair(x-y,0));
	       if(k%4){
	    		cout<<v[(k%4)-1].first<<" "<<v[(k%4)-1].second<<endl;
		   }
		   else{
		   		cout<<v[3].first<<" "<<v[3].second<<endl;
		   }

	            
	   }
	    else if(y>x){
	       vector<pair<long long int,long long int>>m;
	       m.push_back(make_pair(x+n-y,n));
	       m.push_back(make_pair(n,x+n-y));
	       m.push_back(make_pair(y-x,0));
	       m.push_back(make_pair(0,y-x));
	       if(k%4){
	    		cout<<m[(k%4)-1].first<<" "<<m[(k%4)-1].second<<endl;
		   }
		   else{
		   		cout<<m[3].first<<" "<<m[3].second<<endl;
		   }
	   }
	}
	return 0;
}



