// File Name: A_Quintomania.cpp
// Date: 2024-11-21
// Time: 18:40:18

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define ll           long long int

#define vll          vector<long long int>
#define vstring      vector<string>

#define pb           push_back
#define maxVecElement(a)   (*max_element(all(a)))
#define minVecElement(a)   (*min_element(all(a)))

#define PI           3.141592653589793238462
#define mod          1000000007
#define inf          1e18

#define binpow_mod(a, b, m)  binpow(a, b, m)
#define nCr(n, r)    nCr(n, r)
#define nPr(n, r)    nPr(n, r)
#define total(v)     accumulate(v.begin(),v.end(),0)
#define decimal(n)   cout<<fixed<<setprecision(n);

#define And          &&
#define Or           ||
#define no           "NO"
#define yes          "YES"

#define For(a, n)    for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)

#define pqb          priority_queue<int>
#define pqs          priority_queue<int, vector<int>, greater<int>>

#define gcd(a, b)    __gcd(a, b)

#define all(x)       x.begin(), x.end()
#define space        cout << ' ';
#define ok           cout<< "ok";

#define in2(x, y)    cin >> x >> y;
#define in3(x, y, z) cin >> x >> y >> z;

#define out2(x, y)   cout << x << ' ' << y;
#define out3(x, y, z) cout << x << ' ' << y << ' ' << z;
#define line         cout << endl;
#define sort_all(v)  sort(all(v));
#define autoLoop(x)  for(int u : x) cout << u << ' ';
#define debug(x)     cout << #x << " "<< x <<endl;
#define While(n)     ll t; cin>>t; while(t--)
#define vInput(v, n) for (ll i = 0; i < n; i++) cin >> v[i];
ll fact(ll num) { return num == 0 ? 1 : num * fact(num - 1); }
long nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
long nPr(ll n, ll r) { return fact(n) / fact(n - r); }
ll binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }


int main()
{
    fastio;
    While(t){
        ll n;cin>>n;
        vll v(n);
        vInput(v,n);
        bool check = true;
        for(ll i=0;i<n-1;i++){
            ll x = abs(v[i] - v[i+1]);

            if(x == 5 or x==7){
                continue;
            }else{
                check = false;
            }
        }
        if(check){
            cout<<yes<<endl;
        }else{
            cout<<no<<endl;
        }

    }
    return 0;
}