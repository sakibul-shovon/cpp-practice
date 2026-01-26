// File Name: A_Game_23.cpp
// Date: 2026-01-23
// Time: 15:23:21

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
    ll a,b;cin>>a>>b;

    if(a == b){
        cout<<0<<endl;return 0;
    }

    queue<pair<ll,ll>> q;//n,count
    q.push({a,0});
    set<ll> visited;

    while(!q.empty())
    {
        pair<ll,ll> curr = q.front();
        q.pop();
        ll value = curr.first;
        ll count = curr.second;

        ll first = value*2;
        if(first == b)
        {
            cout<<count+1<<endl;return 0;
        }
        if(first<b and visited.find(first) == visited.end())
        {
            q.push({first,count+1});
            visited.insert(first);
        }


        ll second = value*3;
        if(second == b){
            cout<<count+1<<endl;return 0;
        }
        if(second < b and visited.find(second) == visited.end() )
        {
            q.push({second,count+1});
            visited.insert(second);
        }
    }

    cout<<-1<<endl;
    return 0;
}