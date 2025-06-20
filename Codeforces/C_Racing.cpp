// File Name: C_Racing.cpp
// Date: 2025-05-28
// Time: 11:06:27

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

int main() {
    fastio;
    While(T) {
        ll n;
        cin >> n;
        
        vll d(n + 1);
        for(ll i = 1; i <= n; i++) {
            cin >> d[i];
        }
        
        vll L(n + 1), R(n + 1);
        for(ll i = 1; i <= n; i++) {
            cin >> L[i] >> R[i];
        }
        
        
        vll low(n + 1), high(n + 1);
        low[0] = high[0] = 0;
        bool check = true;
        
        for(ll i = 1; i <= n; i++) {
            ll lo = low[i - 1];
            ll hi = high[i - 1];
            
            if(d[i] == -1) {
                
                hi += 1;
            } else {
                
                lo += d[i];
                hi += d[i];
            }
            
            
            lo = max(lo, L[i]);
            hi = min(hi, R[i]);
            
            if(lo > hi) {
                check = false;
                break;
            }
            
            low[i] = lo;
            high[i] = hi;
        }
        
        if(!check) {
            cout << -1 << endl;
            continue;
        }
        
        
        vll ans(n + 1);
        vll h(n + 1);
        
        
        h[n] = low[n];
        
        for(ll i = n; i >= 1; i--) {
            if(d[i] != -1) {
                ans[i] = d[i];
                h[i - 1] = h[i] - d[i];
            } else {
                
                ll cand0 = h[i];
                if(cand0 >= low[i - 1] and  cand0 <= high[i - 1]) {
                    ans[i] = 0;
                    h[i - 1] = cand0;
                } else {
                    
                    ans[i] = 1;
                    h[i - 1] = h[i] - 1;
                }
            }
        }
        
       
        for(ll i = 1; i <= n; i++) {
            cout << ans[i]<< ' ';
            
        }
        line;
    }
    
    return 0;
}