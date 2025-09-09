// File Name: A_conjecture_of_Paul_Erdős.cpp
// Date: 2025-08-31
// Time: 16:06:06
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

// CHANGE 1: Memory limit reduce korsi - 1e8 theke 10000010 korsi
// Karon 1e8 array declare korle memory limit exceed hobe
const ll N = 10000010;
bool is_prime[N];
vector<ll> prime;

void sieve()
{
    fill(is_prime, is_prime + N, true);
    is_prime[0] = is_prime[1] = false;
    prime.push_back(2);
    for (ll i = 4; i < N; i += 2)
        is_prime[i] = false;
    for (ll i = 3; i < N; i += 2)
    {
        if (is_prime[i])
        {
            prime.push_back(i);
            for (ll j = i * i; j < N; j += 2 * i)
                is_prime[j] = false;
        }
    }
}

int main()
{
    fastio;
    sieve();
    
    vll calc(10000000 + 10, 0);
    
    // CHANGE 2: Tomar original logic thik rakhlam, just inner loop ta fix korsi
    for (ll i = 2; i <= 10000000; i++)
    {
        // Sudhu prime number gulor jonno check korbo
        if (is_prime[i] == false) // CHANGE 3: is_prime[i] == 0 er bajay is_prime[i] == false use korsi
            continue;
            
        // CHANGE 4: y er loop ta fix korsi - age j diye korcho, ekhon y diye korbo
        for (ll y = 0; y * y * y * y <= i; y++) // y^4 <= i porjonto
        {
            ll y4 = y * y * y * y; // y^4 calculate
            ll x_squared = i - y4; // x^2 = i - y^4
            
            // CHANGE 5: sqrt() function use kore perfect square check korbo
            if (x_squared >= 0)
            {
                ll x = sqrt(x_squared);
                if (x * x == x_squared) // Perfect square check
                {
                    calc[i]++;
                    break; // Ekbar pele break korbo
                }
            }
        }
    }
    
    // CHANGE 4: Prefix sum same roilo, just variable name change korsi
    vll pre(10000000 + 10, 0);
    for (ll i = 1; i <= 10000000; i++)
    {
        pre[i] = pre[i - 1] + calc[i];
    }
    
    ll t;
    cin >> t;
    while(t--)
    {
        ll n;
        cin >> n;
        cout << pre[n] << endl;
    }
    return 0;
}