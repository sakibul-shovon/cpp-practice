// File Name: C_Long_Jumps.cpp
// Date: 2024-02-05
// Time: 00:19:42

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// Data Types
#define ll           long long int
#define vint         vector<int>
#define vll          vector<long long int>
#define vstring      vector<string>

// Vector Operations
#define pb           push_back
#define maxVecElement(a)   (*max_element(all(a)))
#define minVecElement(a)   (*min_element(all(a)))
#define bin_sc(a, x)      binary_search(all(a), x) // 0/1

// Mathematical Constants and Functions
#define PI           3.141592653589793238462
#define mod          1000000007
#define inf          1e18
#define binpow(a, b)  binpow(a, b)
#define binpow_mod(a, b, m)  binpow(a, b, m)
#define nCr(n, r)    nCr(n, r)
#define nPr(n, r)    nPr(n, r)
#define total(v)     accumulate(v.begin(),v.end(),0)
#define decimal(n)   cout<<fixed<<setprecision(n);

// Logical Operations
#define And          &&
#define Or           ||
#define no           "NO"
#define yes          "YES"

// Looping Macros
#define For(a, n)    for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)

// Priority Queues
#define pqb          priority_queue<int>
#define pqs          priority_queue<int, vi, greater<int>>

// GCD Function
#define gcd(a, b)    __gcd(a, b)

// Generic Operations
#define all(x)       x.begin(), x.end()
#define space        cout << ' ';

// Input/Output Macros
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
ll fact(int num) {
   int i;
   long fact = 1;
   for (i = 2; i <= num; i++)
       fact *= i;
   return fact;
}
long nCr(int n, int r) {
   return fact(n) / (fact(n - r) * fact(r));
}
long nPr(int n, int r) {
   return fact(n) / fact(n - r);
}


int main()
{
    fastio;
    While(t){
        ll n ;cin>>n;
        vll v(n);
        For(0,n) cin>>v[i];
        if(total(v) == n ){
            cout<<n<<endl;
            continue;
        }
        
        ll ans = -1;
        for(ll i = 0 ;i<n;i++){
            ll sum = 0;
            ll temp = v[i];
            ll a = i;
            while(1 ){
                
                sum += (a+1) + v[i];// 2 3 -5 
                //debug(sum);
                if(sum > n or a >=n-1){
                    //debug(i);
                    break;
                }
                temp += v[sum-1];
               //debug(temp);
               a++;
                
            }

            ans = max(ans,temp);
            
            
        }

        cout<<ans<<endl;
        

    }
    return 0;
}