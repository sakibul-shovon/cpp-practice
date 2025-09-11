// File Name: B_Sherlock_and_his_girlfriend.cpp
// Date: 2025-08-31
// Time: 10:02:57

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

const ll N = 1e6;
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

int main() {
    fastio;
    sieve();

    ll n;cin>>n;
    vll ans;
    set<ll>st;

    for(ll i=2;i<=n+1;i++){
        if(is_prime[i] == 1){
           st.insert(1);
            ans.pb(1);//autoLoop(ans);line;
        }else{
            
            ans.pb(2);//autoLoop(ans);line;
            st.insert(2);
        }
        //autoLoop(is_prime);
        
    }
    if(st.size() == 1 ){
        cout<<1<<endl;

    }else{
        cout<<2<<endl;
    }
    autoLoop(ans);line;
    return 0;
}