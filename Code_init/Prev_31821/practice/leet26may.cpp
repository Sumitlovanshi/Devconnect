/*
author : Instinct 
*/
#include <bits/stdc++.h>
using namespace std;
  
#define ll long long 
#define ull unsigned long long
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
  
#define MAX_N 1e5+1
#define INF 1e9
#define MOD 1e9+7
#define LINF 1e18
  
#define rep(i,n) for (i = 0; i < n; i++) 
#define repa(i,a,n) for (i = a; i <= n; i++)
#define repn(i,n,a) for (i = n; i >= a; i--) 
  
  
void solve()
{
    string s;
    cin>>s;
    // cout<<endl;
    // stoi(s);
    int max=0;
    for(int i=0;i<s.length();i++){
        if((int)s[i] > max){
            max = (int)s[i];
        }
    }
    cout<<max - 48<<endl;
}
  
int main()
{
  
     //fast_io;
  
     solve();
  
     return 0;
}