// File Name: B_Divan_and_a_New_Project.cpp
// Date: 2025-07-05
// Time: 13:37:34

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
    While(t){
        ll n;cin>>n;
        vector<pair<ll,ll>> v;
        for(ll i=0;i<n;i++) {
            ll x;cin>>x;
            v.pb({x,i+1});
        }
        sort(v.rbegin(),v.rend());
        //for(auto it:v) cout<<it.first<<' '<<it.second<<endl;

        ll start = 0;
        vll ans(n+1,0);//debug(start);
        ll left = -1,right = +1;

        ll time = 0 ; 

        for(ll i=0;i<n;i++){
            if(i % 2 == 0){
                time  += abs(start - right )*2 * v[i].first;
                ll loc = v[i].second;
                ans[loc] = right;//debug(loc);debug(ans[loc]);
                
                right++;
            }else{
                time += abs(start-left)*2*v[i].first;
                 ll loc = v[i].second;
                ans[loc] = left;//debug(loc);debug(ans[loc]);
                left--;
            }
        }
        ans[0] = start;
        
        cout<<time<<endl;
        autoLoop(ans);line;
       

    }
    return 0;
}