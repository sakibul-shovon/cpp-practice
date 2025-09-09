// File Name: B_Unlucky_Teacher.cpp
// Date: 2025-08-30
// Time: 23:03:04

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

int main()
{
    fastio;
    While(t)
    {
        ll ques, student;
        cin >> ques >> student;
        ll arr[ques][4] = {0};
        for (ll i = 0; i < student; i++)
        {
            for (ll j = 0; j < ques; j++)
            {
                char a, b;
                cin >> a >> b;
                int idx = -1;
                if (a == 'A')
                    idx = 0;
                if (a == 'B')
                    idx = 1;
                if (a == 'C')
                    idx = 2;
                if (a == 'D')
                    idx = 3;

                if (b == 'T')
                {
                    arr[j][idx] = 1;
                }else{
                    arr[j][idx] = -1;
                }
            }
        }
        // line;
        //  for (ll i = 0; i < ques; i++)
        // {
        //     for (ll j = 0; j < 4; j++)
        //     {
        //        cout<<arr[i][j]<<' ';
        //     }
        //     line;
            
        // }line;

        for (ll i = 0; i < ques; i++)
        {
            ll maybeans= 0;
            ll count = 0 ;
            ll check = false;
            for (ll j = 0; j < 4; j++)
            {
                if(arr[i][j] == 0){
                    maybeans = j;
                    count++;
                }
                if(arr[i][j] == 1){
                    if(j == 0) cout<<'A';
                    else if(j == 1) cout<<'B';
                    else if(j == 2) cout<<'C';
                    else if(j == 3) cout<<'D';
                    check  = 1;
                }
            }
            if(!check){//debug(count);
                if(count == 1){
                    if(maybeans == 0) cout<<'A';
                    else if(maybeans == 1) cout<<'B';
                    else if(maybeans == 2) cout<<'C';
                    else if(maybeans == 3) cout<<'D';
                    
                }else{
                    cout<<'?';
                }
                
            }

            if(i == ques-1) continue;
            else space;
            
        }
        line;
    }
    return 0;
}