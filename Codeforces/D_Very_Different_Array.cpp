// File Name: D_Very_Different_Array.cpp
// Date: 2024-01-15
// Time: 22:02:08

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
#define mp make_pair
#define pii pair<int, int>
#define mod 1000000007
#define inf 1e18
#define PI 3.141592653589793238462

#define endl "\n"
#define no "NO"
#define yes "YES"
#define And &&
#define Or ||

#define For(a, n) for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)

#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>
#define gcd(a, b) __gcd(a, b);

#define all(x) x.begin(), x.end()
#define space cout << ' ';

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

int main()
{
    fastio;
    While(t)
    {
        ll a, b;
        in2(a, b);

        vll first(a);
        for (ll i = 0; i < a; i++)
            cin >> first[i];
        vll second(b);
        for (ll i = 0; i < b; i++)
            cin >> second[i];

        sort_all(first);
        sort(second.rbegin(), second.rend());
        

        vll v(a);
        ll ans = 0;
        ll n ;
        if(a == 1){
            n = 1;

        }
        else{
             n = a / 2;
        
        }
        

        for (ll i = 0; i < n; i++)
        {
           
            ans += abs(second[i] - first[i]);
            
        }
        
        ll temp = b - 1;
        
        ll x = a - 1;

        ll check = a - n/2 - 1 ;
        
        //debug(ans);
        
       
        while (true)
        {
            if(check == 0) {
                cout<<ans<<endl;break;
            }
            ans += abs(second[temp] - first [x]);
            x--;temp--;check--;
            
            
        }
        //autoLoop(second);
        
    }
    return 0;
}