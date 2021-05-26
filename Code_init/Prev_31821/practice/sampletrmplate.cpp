/*
****************************
------ PRABHAV DOGRA -------
----THINK AND THEN CODE!----
----- KEEP HUSTLING ! ------
****************************
*/
 
#include <bits/stdc++.h>
using namespace std; 
 
#define FASTIO 			ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define TEST 			int Test ; cin >> Test;
#define TEST2 			int Test = 1;
#define INP(a, n) 		for(ll i=0;i<(ll)n;i++) cin>>a[i] ;
#define INPA(a, n) 		ll a[n]; for(ll i=0;i<(ll)n;i++) cin>>a[i] ;
#define INPV(a, n) 		ll TrT; for(int i=0;i<(ll)n;i++){cin>>TrT; a.push_back(TrT);}
#define OUT(a, n) 		for(ll i=0;i<(ll)n;i++)cout<<a[i]<<" ";
#define forp(i,a,b)    	for(ll i=a;i<(ll)b;i++)
#define fore(i,a,b)     for(ll i=a;i<=(ll)b;i++)
#define	fora(x)			for(auto &it: x)
#define sz 				size()
#define len 			length()
#define beg				begin()
#define en				end()
#define all(x) 			x.beg,x.en
#define ff				first
#define ss				second
#define pb				push_back
#define pp 				pop_back
#define lb 				lower_bound
#define ub 				upper_bound
#define N				'\n'
#define YES(n) 			cout << ((n) ? "YES" : "NO") << "\n" ;
#define Yes(n) 			cout << ((n) ? "Yes" : "No") << "\n" ;
#define fix(f,n) 		fixed << setprecision(n) << f 
#define M               1000000007
#define PI 				3.1415926535897932384626433832795
 
#ifndef ONLINE_JUDGE 
    #define bug fprintf(stderr, "====TESTING====\n") ;
    #define VAL(x) cerr << "The value of " << #x << " is " << x << endl ;
    #define debug(...) fprintf(stderr, __VA_ARGS__) ;
#endif 
 
typedef long long int ll;
typedef long double ld;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvll;
typedef vector<vector<ld>> vvld;
typedef pair<ll, ll> pll;
typedef vector<int> vi ;
typedef vector<pair<int, int>> vpi;
typedef vector<pair<ll,ll> > vpll;
 
ll modmul(ll a, ll b, ll c) {
 
  ll ans = 0;
  ll y = a % c;
  while (b) {
    if (b % 2 == 1) {
      (ans += y) %= c;
    }
    y = y * 2 % c;
    b /= 2;
  }
  return ans;
}
 
ll modpow(ll x,ll n,ll m) { 
 
    if(n == 0) return 1 % m ; 
    ll u = modpow(x,n/2,m);
    u=(u*u)%m;
    if(n % 2 == 1 ) 
        u = ((u % m)*(x % m)) % m ; 
    return u;
}
 
ll MAXN ;
vector<int> isPrime;
vector<ll> prime;
vector<ll> SPF;
void sieve() {
    SPF.resize(MAXN) ;
    isPrime.resize(MAXN, true) ;
    prime.clear();
    isPrime[0] = isPrime[1] = false;
    for(int i = 2 ; i < MAXN ; i++) {
        if(isPrime[i]) {
            prime.push_back(i);
            SPF[i] = i;
        }
        for(ll j = 0 ; j < prime.size() && i*prime[j] < MAXN && prime[j] <= SPF[i] ; j++) {
            isPrime[i*prime[j]] = false;
            SPF[i*prime[j]] = prime[j];
        }
    }
}
 
//---------------------------------MAIN CODE---------------------------------//
 
 
int main() 
{	FASTIO
    // #ifndef ONLINE_JUDGE
        // freopen("input.txt", "r", stdin) ;
        // freopen("output.txt", "w", stdout) ;
    // #endif 
    // MAXN = 1e8 ;
    // sieve() ;
    TEST
    while(Test--)
    {	
        ll n, temp, ans = 0;
        cin >> n;
        string s, p;
        cin >> s >> p;
        ll a[2] = {0}, b[2] = {0};
        forp(i, 0, n) {
            if(s[i] == '0') a[0]++;
            else a[1]++;
            if(p[i] == '0') b[0]++;
            else b[1]++;
        }
        if(a[0] != b[0] || a[1] != b[1]) {
            Yes(0);
            continue;
        }
        ll f = 0, c = 0;
        for(ll i = n - 1 ; i >= 0 ; i--) {
            if(s[i] == p[i]) continue;
            if(s[i] == '0') {
                c++;
                continue;
            }
            else {
                if(c == 0) {
                    f = 1;
                    break;
                }
                c--;
            }
        }
        if(f == 1) Yes(0);
        if(f == 0) Yes(1);
    }
    return 0;
}

