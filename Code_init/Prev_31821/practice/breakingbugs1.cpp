#include <bits/stdc++.h>
using namespace std;

#define FASTIO 			ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define Test 			int Test ; cin >> Test;


int main() 
{	
//	FASTIO
//   #ifndef ONLINE_JUDGE
//   freopen("input.txt", "r", stdin) ;
//   freopen("output.txt", "w", stdout) ;
// 	#endif

    int n;
    cin>>n;
    int it=1,pt=n;
    int arr[n];
   // int it=1;
    for(int i=0;i<n;i++){
    	cin>>arr[n];
    }
    int ff=-1,ll=-1;
    for(int i=0;i<n;i++){
    	if( arr[i] != it ){
    		ff = i;
    		break;
    	}
    	it++;
    }
    for(int i = n-1; i >= 0;i--){
    	if( arr[i] != pt){
    		ll=i;
    		break;
    	}
    	pt--;
    }
    if( ff == -1 || ll == -1 ){
    	cout<<"0 0"<<endl;
    }
    else{
    	cout<<ff<<" "<<ll<<endl;
    }
    return 0;
}
