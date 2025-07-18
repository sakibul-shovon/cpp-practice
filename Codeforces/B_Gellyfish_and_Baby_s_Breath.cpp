// File Name: B_Gellyfish_and_Baby_s_Breath.cpp
<<<<<<< HEAD
// Date: 2025-05-31
// Time: 22:05:42
=======
// Date: 2025-06-02
// Time: 00:42:02
>>>>>>> 7ed3df5086810800dbdfc130d64353df15977b3e

#include <bits/stdc++.h>
using namespace std;

<<<<<<< HEAD
#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long int
#define vll vector<long long int>
#define pb push_back
#define mod 998244353

const ll M = 100005;
vector<ll> v(M);

void preCompute() {
    v[0] = 1;
    for(ll i = 1; i < M; i++) {
        v[i] = (v[i-1] * 2) % mod;
    }
}

int main() {
    fastio;
    preCompute();

    int t;
    cin >> t;
    while(t--) {
        ll n;
        cin >> n;
        vll p(n), q(n);
        for(ll i = 0; i < n; i++) cin >> p[i];
        for(ll i = 0; i < n; i++) cin >> q[i];

        for(ll i = 0; i < n; i++) {
            ll maxx = 0;
            for(ll j = 0; j <= i; j++) {
                ll val = (v[p[j]] + v[q[i-j]]) % mod;
                maxx = max(maxx, val);
            }
            cout << maxx << " ";
        }
        line;
    }
    return 0;
}
=======
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
#define mod 1000000007
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
#define MOD 998244353
ll power2[100001];
int main()
{

    fastio;
    power2[0] = 1;
    for (ll i = 1; i <= 100000; i++)
    {
        power2[i] = (power2[i - 1] * 2) % MOD;
    }

    While(t){
        ll n;cin>>n;
        vll p(n),q(n);
        for(ll i=0;i<n;i++) cin>>p[i];
        for(ll i=0;i<n;i++) cin>>q[i];

        vll positionP(n),positionQ(n);
        set<ll> forP,forQ;

        for(ll i=0;i<n;i++){
            positionP[p[i]] = i;
            positionQ[q[i]] = i;
        }
        //autoLoop(positionP);line;autoLoop(positionQ);
        vll ans;
        for(ll i=0;i<n;i++){
            forP.insert(p[i]);
            forQ.insert(q[i]);

            ll maxP = *forP.rbegin();
            ll maxQ = *forQ.rbegin();

            ll j1 = i - positionP[maxP];
            ll value1 = (power2[maxP] + power2[q[j1]]) % MOD;


            ll j2 = i-positionQ[maxQ];
            ll value2 = (power2[p[j2]] + power2[maxQ]) % MOD;
            ans.pb(max(value1,value2));
        }

        autoLoop(ans);
        line;

        
    }
    return 0;
}
>>>>>>> 7ed3df5086810800dbdfc130d64353df15977b3e
