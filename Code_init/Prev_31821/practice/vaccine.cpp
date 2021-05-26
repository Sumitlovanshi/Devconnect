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
    int g,p;
    cin>>g>>p;
    g--;
    int arr[10];
    int a = 9, d=0;;
    for(int i=0;i<10;i++){
        cin>>arr[i];
    }
    int ok =0,s=0,e=0;
    while(a >= g){
        
        if(arr[a] > p){
            d++;
            if(a == g){
                s = d;
                // ok = 1;
            }
            arr[a] -= p;
            
        }
        else{
            if(a == g){
                s = d;
                // ok = 1;
            }
            arr[a] = p- arr[a];
            a--;
        }
    }
    cout<<s<<" "<<e<<endl;
    // if(ok){
    //     cout<<s<<" "<<e<<endl;
    // }
    // else{
    //     cout<<<<" "<<d<<endl;
    // }
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