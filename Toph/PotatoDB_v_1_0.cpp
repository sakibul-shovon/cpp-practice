// File Name: PotatoDB_v_1_0.cpp
// Date: 2025-03-08
// Time: 02:40:57

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
ll sumOfDigits(ll n) {
    ll sum = 0;
    while (n != 0) {

        // Extract the last digit
        int last = n % 10;

        // Add last digit to sum
        sum += last;

        // Remove the last digit
        n /= 10;
    }
    return abs(sum);
}
int main() {
    fastio;
    map<ll,ll>mp;
    vector<ll>v(100000,0); 
    ll count = 0;
    While(t){
        char c;
        ll n;
        cin>>c>>n;
        if(c == 'A'){
            count++;
            mp[n]++;
            //cout<<mp[n]<<endl;
            ll sum = sumOfDigits(n);
            v[sum]++;
            cout<<count<<endl;
        }
        else if(c == 'S'){
           cout<<v[n]<<endl;
         
        }
        else{
            ll sum = sumOfDigits(n);
            if(mp[n] > 0){
                v[sum]--;
                mp[n]--;
                count--;
            }
           
            cout<<count<<endl;
        }

    }
    
    return 0;
}