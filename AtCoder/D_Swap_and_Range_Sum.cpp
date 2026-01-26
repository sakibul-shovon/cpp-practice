// File Name: D_Swap_and_Range_Sum.cpp
// Date: 2026-01-24
// Time: 18:50:48

#include <bits/stdc++.h>
using namespace std;

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
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }
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
#define N 200005

ll tree[4 * N];
ll v[N];

void build(ll node, ll b, ll e)
{
    if (b == e)
    {
        tree[node] = v[b];
        return;
    }
    ll mid = (b + e) / 2;
    ll left = 2 * node;
    ll right = 2 * node + 1;
    build(left, b, mid);
    build(right, mid + 1, e);
    tree[node] = tree[left] + tree[right];
}

void update(ll node, ll b, ll e, ll index, ll val)
{
    if (index < b || index > e)
        return;
    if (b == e)
    {
        tree[node] = val;
        return;
    }
    ll mid = (b + e) / 2;
    ll left = 2 * node;
    ll right = 2 * node + 1;
    update(left, b, mid, index, val);
    update(right, mid + 1, e, index, val);
    tree[node] = tree[left] + tree[right];
}

ll query(ll node, ll b, ll e, ll i, ll j)
{
    if (i > e || j < b)
        return 0;
    if (b >= i && e <= j)
        return tree[node];

    ll mid = (b + e) / 2;
    ll left = 2 * node;
    ll right = 2 * node + 1;

    return query(left, b, mid, i, j) + query(right, mid + 1, e, i, j);
}

int main()
{
    fastio;
    ll n, q;
    cin >> n >> q;

    for (ll i = 1; i <= n; i++)
        cin >> v[i];

    build(1, 1, n);

    while (q--)
    {
        ll type;
        cin >> type;
        if (type == 1)
        {
            ll x;
            cin >> x;
            ll val1 = v[x];
            ll val2 = v[x + 1];

            update(1, 1, n, x, val2);
            update(1, 1, n, x + 1, val1);

            swap(v[x], v[x + 1]);
        }
        else
        {
            ll l, r;
            cin >> l >> r;
            cout << query(1, 1, n, l, r) << "\n";
        }
    }
    return 0;
}

// Problem:
// Given a 1-indexed array A of size N, process Q queries of two types:
// 1 x   : swap A[x] and A[x+1] (1 <= x < N)
// 2 l r : print the sum of A[l..r] (inclusive)
// Input format: N Q, then N array values, then Q queries.
// Output: For each type-2 query print the range sum on its own line.