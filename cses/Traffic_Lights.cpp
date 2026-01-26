// File Name: Traffic_Lights.cpp
<<<<<<< HEAD
// Date: 2026-01-19
// Time: 17:13:49
=======
// Date: 2026-01-17
// Time: 02:18:53
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a

#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
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

=======
#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)
#define ll long long int
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>
#define pb push_back
#define maxVecElement(a) (*max_element(all(a)))
#define minVecElement(a) (*min_element(all(a)))
#define bin_sc(a, x) binary_search(all(a), x) // 0/1
#define PI 3.141592653589793238462
#define mod 1000000007
#define inf 1e18
#define binpow(a, b) binpow(a, b)
#define binpow_mod(a, b, m) binpow(a, b, m)
#define nCr(n, r) nCr(n, r)
#define nPr(n, r) nPr(n, r)
#define total(v) accumulate(v.begin(), v.end(), 0)
#define decimal(n) cout << fixed << setprecision(n);
#define And &&
#define Or ||
#define no cout << "NO";
#define yes cout << "YES";
#define For(a, n) for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define gcd(a, b) __gcd(a, b)
#define all(x) x.begin(), x.end()
#define space cout << ' ';
#define ok cout << "ok";
#define in(x) cin >> x;
#define in2(x, y) cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x) cout << x;
#define out2(x, y) cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line cout << endl;
#define sort_all(v) sort(all(v));
#define autoLoop(x) \
    for (int u : x) \
        cout << u << ' ';
#define debug(x) cout << #x << " " << x << endl;
#define While(n) \
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
        v.push_back(temp);  \
    }
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }
<<<<<<< HEAD

int main() {
    fastio;
    ll x,n;cin>>x>>n;
    set<ll> position;
    multiset<ll> length;
    position.insert(0);
    position.insert(x);
    length.insert(x);

    for(ll i=0;i<n;i++)
    {
        ll x;cin>>x;
        auto it = position.upper_bound(x);
        ll right = *it;
        it--;
        ll left = *it;
        position.insert(x);
        length.erase(length.find(x-left+right-x));

        length.insert(right-x);
        length.insert(x-left);

        cout<<*length.rbegin()<<' ';



    }line;
=======
ll binPowMod(ll n, ll p, ll m)
{
    n %= m;
    return p == 0 ? 1 : (p % 2 == 0 ? binPowMod((n * n) % m, p / 2, m) : (n * binPowMod((n * n) % m, (p - 1) / 2, m)) % m);
}
#define read(v)                       \
    for (ll i = 0; i < v.size(); i++) \
        cin >> v[i];
#define pairLoop(x)  \
    for (auto u : x) \
        cout << u.first << ' ' << u.second << endl;
int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};

int main()
{
    fastio;
    ll n, k;
    cin >> n >> k;
    vll v(n);
    ll maxx = 0;
    ll currMax ;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        v[i] = x;
        
        if (i == 0)
        {
            maxx = max({x, n - x});
            currMax = x;
        }
        else if(x>currMax)
        {
            maxx = max({abs(v[i] - v[i - 1]), n - x});
        }
        currMax = max(currMax,x);

        cout<<maxx<<' ';
    }
    line;
>>>>>>> 120e8641cc882464336085e3d15b9bcfbfeeba6a
    return 0;
}