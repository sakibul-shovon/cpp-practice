// File Name: E_Find_the_Car.cpp
// Date: 2024-05-15
// Time: 00:51:44
 
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
long nCr(ll n, ll r) { return fact(n) / (fact(n - r) * fact(r)); }
long nPr(ll n, ll r) { return fact(n) / fact(n - r); }
int binPow(ll n, ll p) { return p == 0 ? 1 : (p % 2 == 0 ? binPow(n * n, p / 2) : n * binPow(n * n, (p - 1) / 2)); }
 
 
 
int main()
{
    fastio;
    While(t){
        ll n,k,q;
        in3(n,k,q);
 
        vector<double> distance(k+1,0);
       vector<double> time(k+1,0);
        vector<double> temp(k+1,0);
 
        for(ll i = 1;i<k+1;i++) cin>>distance[i];
         for(ll i = 1;i<k+1;i++) cin>>time[i];
 
         for(ll i = 1;i<k+1;i++){
            double d = distance[i]-distance[i-1];
            double t = time[i] - time[i-1];
            temp[i] = d/t;
         }
 
         while(q--){
            double tt;cin>>tt;
            if(tt == 0){
                cout<<0<<" ";continue;;
            }
            auto pos = lower_bound(all(distance), tt) - distance.begin();
            double calc = tt - distance[pos-1];
            double ans = time[pos-1] + calc/temp[pos];
            cout<<int(ans)<<" ";
         }cout<<endl;
         
 
        //     line;
        //  autoLoop(time);line;
        //  autoLoop(distance);line;
        //  for(auto it:temp){
        //     cout<<it<<" ";
        //  }
 
    }
    return 0;
}