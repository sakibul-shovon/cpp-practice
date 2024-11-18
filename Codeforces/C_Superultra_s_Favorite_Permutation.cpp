// File Name: C_Superultra_s_Favorite_Permutation.cpp
// Date: 2024-11-17
// Time: 21:44:19

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
#define bin_sc(a, x)      binary_search(all(a), x) // 0/1
#define PI           3.141592653589793238462
#define mod          1000000007
#define inf          1e18
#define binpow(a, b)  binpow(a, b)
#define binpow_mod(a, b, m)  binpow(a, b, m)
#define nCr(n, r)    nCr(n, r)
#define nPr(n, r)    nPr(n, r)
#define total(v)     accumulate(v.begin(),v.end(),0)
#define decimal(n)   cout<<fixed<<setprecision(n);
#define And          &&
#define Or           ||
#define no           cout<< "NO";
#define yes          cout<< "YES";
#define For(a, n)    for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)
#define pqb          priority_queue<int>
#define pqs          priority_queue<int, vi, greater<int>>
#define gcd(a, b)    __gcd(a, b)
#define all(x)       x.begin(), x.end()
#define space        cout << ' ';
#define ok cout<< "ok";
#define in(x)        cin >> x;
#define in2(x, y)    cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;
#define out(x)       cout << x;
#define out2(x, y)   cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line         cout << endl;
#define sort_all(v)  sort(all(v));
#define autoLoop(x)  for(int u : x) cout << u << ' ';
#define debug(x)     cout << #x << " "<< x <<endl;
#define While(n)      int t; cin>>t;while(t--)
#define WhileVecInput(v,n)   while(n--){ ll temp;cin>>temp; v.push_back(temp); }
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
ll nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
ll nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }



vector<bool> sieveOfEratosthenes(ll limit) {
    vector<bool> isPrime(limit + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (ll i = 2; i * i <= limit; ++i) {
        if (isPrime[i]) {
            for (ll multiple = i * i; multiple <= limit; multiple += i) {
                isPrime[multiple] = false;
            }
        }
    }

    return isPrime;
}

int main() {
    fastio;

    ll limit = 2000005;
    vector<bool> sieve = sieveOfEratosthenes(limit);

    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;

        vll even, odd;
        for (ll i = 2; i <= n; i += 2) {
            even.push_back(i);
        }

        ll lastEven = even.back();
        bool compositeFound = false;
        ll compositeOdd;

        for (ll i = 1; i <= n; i += 2) {
            if (!sieve[lastEven + i] && !compositeFound) {
                compositeFound = true;
                compositeOdd = i;
            } else {
                odd.push_back(i);
            }
        }

        if (compositeFound) {
            for (auto it : even)
                cout << it << ' ';
            cout << compositeOdd << ' ';
            for (auto it : odd)
                cout << it << ' ';
            cout << '\n';
        } else {
            cout << -1 << '\n';
        }
    }

    return 0;
}
