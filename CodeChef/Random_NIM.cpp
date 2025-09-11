<<<<<<< HEAD
// File Name: Random_NIM.cpp
// Date: 2025-08-20
// Time: 22:53:49

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define ll long long int
#define vll vector<long long int>
#define vstring vector<string>
#define pb push_back
#define all(x) x.begin(), x.end()
#define sort_all(v) sort(all(v))
#define space cout << ' ';
#define line cout << endl;
#define ok cout << "ok" << endl;
#define yes "YES"
#define no "NO"
#define PI 3.141592653589793238462
//#define mod 1000000007
#define inf 1e18
#define total(v) accumulate(v.begin(), v.end(), 0LL)
#define decimal(n) cout << fixed << setprecision(n);
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) ((a / gcd(a, b)) * b)
#define autoLoop(x)  \
    for (auto u : x) \
        cout << u << ' ';
#define debug(x) cout << #x << " = " << x << endl;
#define While(t) \
    int t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
        v.pb(temp);         \
    }

int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
#define For(a, n) for (int i = a; i < n; i++)
#define pqs priority_queue<ll, vector<ll>, greater<ll>>

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

int main()
{
    fastio;
    ll mod = 998244353;
    ll invmod = 499122177;

    While(T)
    {
        ll n;
        cin >> n;
        bool check = true;
        for (ll i = 0; i < n; ++i)
        {
            ll x;
            cin >> x;
            if (x != 1)
               { check = false;}
        }
        if (check)
        {
            if (n % 2 == 1)
            {
                cout << 1 << endl;
            }
            else
            {
                cout << 0 << endl;
            }
        }
        else
        {
            cout << invmod << endl;;
        }
    }
    return 0;
}
=======
#include <bits/stdc++.h>
using namespace std;

static const long long MOD = 998244353;
static const long long INV2 = 499122177; // (MOD+1)/2

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        int N; cin >> N;
        bool hasBig = false; // any Ai >= 2
        int ones = 0;
        for (int i = 0; i < N; ++i) {
            int a; cin >> a;
            if (a >= 2) hasBig = true;
            else ones++;
        }

        long long ans;
        if (hasBig) {
            ans = INV2;              // 1/2 mod MOD
        } else {
            ans = (N & 1) ? 1 : 0;   // all ones: Alice wins iff N is odd
        }
        cout << ans << '\n';
    }
    return 0;
}
>>>>>>> 4e6368c4a137880b2b455ef28e4677f080331f9a
