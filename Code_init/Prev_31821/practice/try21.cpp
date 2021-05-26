/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long int
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
  
  
void solve()
{
    int D,d,a,b,c;
    cin>>D>>d>>a>>b>>c;
    int ans = d*D;
    if(ans < 10){
        cout<<"0"<<endl;
    }
    else if(ans < 21){
        cout<<a<<endl;
    }
    else if(ans < 42){
        cout<<b<<endl;
    }
    else{
        cout<<c<<endl;
    }

}
  
int main()
{
  
     //fast_io;
  
     ull t;
     cin>>t;
     while(t--)
     {
         solve();
     }
     return 0;
}