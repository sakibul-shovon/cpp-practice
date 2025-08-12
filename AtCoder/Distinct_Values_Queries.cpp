// File Name: Distinct_Values_Queries.cpp
// Date: 2025-07-21
// Time: 07:05:56

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
    ll t;       \
    cin >> t;    \
    while (t--)
#define WhileVecInput(v, n) \
    while (n--)             \
    {                       \
        ll temp;            \
        cin >> temp;        \
        v.pb(temp);         \
    }

ll dRow[] = {-1, 0, 1, 0};
ll dCol[] = {0, 1, 0, -1};
#define For(a, n) for (ll i = a; i < n; i++)
#define pqs priority_queue<ll, vector<ll>, greater<ll>>

ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }

struct BinaryIndexedTree
{
    vector<ll> tree;
    ll n;

    BinaryIndexedTree(ll size)
    {
        n = size;
        tree.assign(n + 1, 0);
    }

    void update(ll idx, ll delta)
    {
        for (ll i = idx + 1; i <= n; i += i & (-i))
        {
            tree[i] += delta;
        }
    }

    ll query(ll idx)
    {
        ll sum = 0;
        for (ll i = idx + 1; i > 0; i -= i & (-i))
        {
            sum += tree[i];
        }
        return sum;
    }
};

int main()
{
    fastio;

    ll n, q;
    cin >> n >> q;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<vector<pair<ll, ll>>> queryGroups(n);
    for (ll i = 0; i < q; i++)
    {
        ll left, right;
        cin >> left >> right;
        left--;
        right--;
        queryGroups[left].push_back({right, i});
    }

    BinaryIndexedTree bit(n);
    map<ll, ll> lastPosition;
    vector<ll> answers(q);

    for (ll i = n - 1; i >= 0; i--)
    {
        ll currentValue = arr[i];

        if (lastPosition.find(currentValue) != lastPosition.end())
        {
            bit.update(lastPosition[currentValue], -1);
        }

        lastPosition[currentValue] = i;
        bit.update(i, 1);

        for (const auto &query : queryGroups[i])
        {
            ll rightEnd = query.first;
            ll queryIndex = query.second;
            answers[queryIndex] = bit.query(rightEnd);
        }
    }

    for (ll answer : answers)
    {
        cout << answer << "\n";
    }

    return 0;
}