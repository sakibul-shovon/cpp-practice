// File Name: Jump_Game_of_Badamtola.cpp
// Date: 2025-08-16
// Time: 01:58:58
#include <bits/stdc++.h>
using namespace std;
#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
#define ll           long long int
#define vint         vector<int>
#define vll          vector<long long int>
#define vstring      vector<string>
#define pb           push_back
#define maxVecElement(a)   (*max_element(all(a)))
#define minVecElement(a)   (*min_element(all(a)))
#define bin_sc(a, x)       binary_search(all(a), x) // 0/1
#define PI           3.141592653589793238462
#define mod          1000000007
#define inf          1e18
#define total(v)     accumulate(v.begin(),v.end(),0)
#define decimal(n)   cout<<fixed<<setprecision(n);
#define And          &&
#define Or           ||
#define no           "NO"
#define yes          "YES"
int dRow[] = {-1, 0, 1, 0};
int dCol[] = {0, 1, 0, -1};
#define For(a, n)        for (int i = a; i < n; i++)
#define ForRev(a, b)     for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)
#define pqb              priority_queue<int>
#define pqs              priority_queue<int, vector<int>, greater<int>>
#define gcd(a, b)        __gcd(a, b)
#define all(x)           x.begin(), x.end()
#define space            cout << ' ';
#define ok               cout << "ok" << endl;
#define in(x)            cin >> x;
#define in2(x, y)        cin >> x >> y;
#define in3(x, y, z)     cin >> x >> y >> z;
#define out(x)           cout << x;
#define out2(x, y)       cout << x << ' ' << y;
#define out3(x, y, z)    cout << x << ' ' << y << ' ' << z;
#define line             cout << endl;
#define sort_all(v)      sort(all(v));
#define autoLoop(x)      for (int u : x) cout << u << ' ';
#define debug(x)         cout << #x << " = " << x << endl;
#define While(t)         int t; cin >> t; while (t--)
#define WhileVecInput(v, n) while (n--) { ll temp; cin >> temp; v.push_back(temp); }
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }
ll A[100005], B[100005];
vll dp(100005, -1);
ll n;
vector<vector<ll>> divisors(200005);
ll solve(ll i) {
    if (i == n) return 0;
    if (dp[i] != -1) return dp[i];
    ll ans = inf;
    for (ll j = 0; j < divisors[A[i]].size(); j++) {
        ll D = divisors[A[i]][j];
        if (D == A[i]) continue;
        ll next = i + D;//next kon box e jabo
        if (next > n) continue;
        ll jCost = (j + 1) * B[i];//jump cost
        ll costNext = solve(next);//i theke jump diye jei box e gesi otar theke n porjonto jaite koto lagbe
        if (costNext != inf) {
            ans = min(ans, jCost + costNext);
        }
    }
    dp[i] = ans;
    return ans;
}
int main() {
    fastio;
    for (ll d = 1; d <= 200000; d++) {
        for (ll m = d; m <= 200000; m += d) {
            divisors[m].pb(d);
        }
    }
    for (ll i = 1; i <= 200000; i++) {
        sort_all(divisors[i]);
    }
    cin >> n;
    for (ll i = 1; i <= n; i++) cin >> A[i];
    for (ll i = 1; i <= n; i++) cin >> B[i];
    ll ans = solve(1);
    cout << ans << endl;
    return 0;
}