// File Name: A_Frog_1.cpp
// Date: 2025-07-18
// Time: 16:37:30

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll           long long int
#define vll          vector<long long int>
#define vstring      vector<string>
#define pb           push_back
#define all(x)       x.begin(), x.end()
#define sort_all(v)  sort(all(v))
#define space        cout << ' ';
#define line         cout << endl;
#define ok           cout << "ok" << endl;
#define yes          "YES"
#define no           "NO"
#define PI           3.141592653589793238462
#define mod          1000000007
#define inf          1e18
#define total(v)     accumulate(v.begin(), v.end(), 0LL)
#define decimal(n)   cout << fixed << setprecision(n);
#define gcd(a, b)    __gcd(a, b)
#define lcm(a, b)    ((a / gcd(a, b)) * b)
#define autoLoop(x)  for (auto u : x) cout << u << ' ';
#define debug(x)     cout << #x << " = " << x << endl;
#define While(t)     int t; cin >> t; while (t--)
#define WhileVecInput(v, n) while (n--) { ll temp; cin >> temp; v.pb(temp); }

int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
#define For(a, n)    for (int i = a; i < n; i++)
#define pqs          priority_queue<ll, vector<ll>, greater<ll>>

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }
<<<<<<< HEAD
ll v[1000005];
vll dp(1000005,-1) ;
ll n;

ll solve(ll i){
   if(i == n )  return 0;
   ll ans = inf;

   if(dp[i] != -1 ) return dp[i];

   ll first = solve(i+1 ) + abs(v[i] - v[i+1]);
    ll second;
   if(i+2 <= n){
         second = solve(i+2) + abs(v[i] - v[i+2]);
   }

   ans = min(first,second);
   dp[i] = ans;

   return ans;


=======
ll n;
vll v(1e5+10);
vll dp(1e5+10);

ll solve(ll i){
    if(i == n){
        return 0;
    }

    if(dp[i] != -1) return dp[i];

    ll way1 = abs(v[i]-v[i+1]) + solve(i+1);
    ll res = way1;
    if(i+2<=n){
        ll way2 = abs(v[i]-v[i+2])+ solve(i+2);
        res = min(way1,way2);
    }
    dp[i] = res;
    return res;

>>>>>>> b3ff48ad5a13c78777c45c466f02f0bcffe9e811
}

int main() {
    fastio;
<<<<<<< HEAD
    
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>v[i];
=======
    cin>>n;
    for(ll i=1;i<=n;i++) cin>>v[i];

    for(ll i=1;i<n;i++) {
        dp[i] = -1;
    }
>>>>>>> b3ff48ad5a13c78777c45c466f02f0bcffe9e811
    ll ans = solve(1);
    cout<<ans<<endl;
    return 0;
}