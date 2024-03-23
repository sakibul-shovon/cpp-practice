// File Name: Eid.cpp
// Date: 2024-03-18
// Time: 12:25:02

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
#define vector_input(v, n) for(int i = 0; i < n; ++i) cin >> v[i];
#define no           "NO"
#define yes          "YES"
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
#define debugSpecial(args ...) cerr << __LINE__ << ": ", err(new istringstream(string(#args)), args), cerr << '\n'
void err(istringstream *iss) {}
template<typename T, typename ... Args> void err(istringstream *iss, const T &_val, const Args & ... args) {
	string _name;
	*iss >> _name;
	if (_name.back()==',') _name.pop_back();
	cerr << _name << " = " << _val << "; ", err(iss, args ...);
}
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

#define Cs(c) cout<<"Case "<<c++<<": ";

int main()
{
    ll c = 1;
	fastio;
	While(t){
		ll m,n;cin>>m>>n;
        
        Cs(c);
		if(m == 1 or n == 1 ){
            cout<<max(m,n)<<endl;
        }

        

		else if(m == 2 or n == 2){
            ll ans = max(m,n);

            if(ans % 4 == 1 or ans % 4 == 3){
                ans++;  
                //11001
                //11001
            }
            else if(ans % 4 == 2){
                ans +=2;
            }
            cout<<ans<<endl;

            
		}
        else {
            ll ans;
            if(m*n % 2 == 0 ){
                 ans = (m*n) / 2;
            }
            else{
               ans = (m*n) / 2 + 1; 
            }
            cout<<ans<<endl;
        }
	}
	return 0;
}

// //int m = 10; // Example value for m
//     int n = 5;  // Example value for n

//     int remainder = (m * n) % 8;
//     int result;

//     if (remainder >= 4) {
//         result = ((m * n) / 8) * 4 + 4;
//     } else {
//         result = ((m * n) / 8) * 4 + remainder;
//     }

//     cout << result << endl;