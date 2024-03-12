// File Name: A_Two_Substrings.cpp
// Date: 2024-02-09
// Time: 12:30:22

#include <bits/stdc++.h>
using namespace std;

#define fastio                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0)

// Data Types
#define ll long long int
#define vint vector<int>
#define vll vector<long long int>
#define vstring vector<string>

// Vector Operations
#define pb push_back
#define maxVecElement(a) (*max_element(all(a)))
#define minVecElement(a) (*min_element(all(a)))
#define bin_sc(a, x) binary_search(all(a), x) // 0/1

// Mathematical Constants and Functions
#define PI 3.141592653589793238462
#define mod 1000000007
#define inf 1e18
#define binpow(a, b) binpow(a, b)
#define binpow_mod(a, b, m) binpow(a, b, m)
#define nCr(n, r) nCr(n, r)
#define nPr(n, r) nPr(n, r)
#define total(v) accumulate(v.begin(), v.end(), 0)
#define decimal(n) cout << fixed << setprecision(n);

// Logical Operations
#define And &&
#define Or ||
#define no "NO"
#define yes "YES"

// Looping Macros
#define For(a, n) for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)

// Priority Queues
#define pqb priority_queue<int>
#define pqs priority_queue<int, vi, greater<int>>

// GCD Function
#define gcd(a, b) __gcd(a, b)

// Generic Operations
#define all(x) x.begin(), x.end()
#define space cout << ' ';
#define ok cout<<"ok"<<endl;
// Input/Output Macros
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
ll fact(int num)
{
    int i;
    long fact = 1;
    for (i = 2; i <= num; i++)
        fact *= i;
    return fact;
}
long nCr(int n, int r)
{
    return fact(n) / (fact(n - r) * fact(r));
}
long nPr(int n, int r)
{
    return fact(n) / fact(n - r);
}

// int main()
// {
//     fastio;
//     string s;
//     cin >> s;
//     ll l = s.length();
//     ll ab = 0, ba = 0;
//     vll overlap;
//     map<char, ll> mp;
//     for (ll i = 0; i < l; i++)
//     {
//         if (s[i] == 'A' and s[i + 1] == 'B' and s[i + 2] != 'A')
//         {
//             ab++;
//             overlap.pb(i + 1);
//         }
//         if (s[i] == 'B' and s[i + 1] == 'A' and s[i + 2] != 'B')
//         {

//             ba++;
//         }
//         mp[s[i]]++;
//     }
//     debug(ab);
//     debug(ba);
//     debug(mp.size());

//     if (mp.size() == 2 and l > 3)
//     {
//         // if (l == 4 and (ab>=1 and ba>=1))
//         // {ok
//         //     cout << no << endl;
//         // }
//         // else
//         // {
//         //     cout << yes << endl;
//         // }
//         if(l == 4 and (ab >=1 and ba>=1))cout<<yes;
//         else cout<<no;
//         return 0;
//     }
//     if ((ab == 0 or ba == 0) or l <= 3)
//     {
//         cout << no << endl;
//         return 0;
//     }

//     else
//     {
//         ll ans = max(ab, ba) - min(ab, ba);
//         if(ab >=2 and ba>=2 and mp.size() > 2){
//             cout<<yes<<endl;
//         }

//         else if ((ab == 1 and ba == 1) or ab!=ba)
//         {
//             cout << yes << endl;
//         }
//         else
//         {

//             cout << no << endl;
//         }
//     }

//     // jekono ekta bijor thakle true;

//     return 0;
// }



// int main() {
//     string s;
//     cin >> s;
//     int l = s.length();
//     int ab = 0, ba = 0;
//     ll count =  0;
//     for (int i = 0; i < l - 1; i++) {
//         if (s[i] == 'A' && s[i + 1] == 'B') {
//             s[i] = '1';
//             s[i + 1] = '1';
//             i++;count++;
//              // Add this line to break out of the loop after the replacement
//         }
//     }
//     if(s.size() <=3 ){
//         cout<<no<<endl;return 0;
//     }
//     size_t found = s.find("BA");
//     if (found != string::npos) {
//        cout<<yes<<endl;
//     } else {
//         sort(s.begin(),s.end());
//        if(s[0] == '1' and s[1] =='1' and count >= 2 and l>4){
//         cout<<yes<<endl;
//        }else{
//         cout<<no;
//        }
//     }
// // debug(count);
// //     cout << s;
//     return 0;
// }

// int main(){
//     string s;cin>>s;
//     ll l = s.length();

//     for(ll i = 0 ; i < l;i++){
//         if(s[i] == 'A' and s[i+1] == 'B'){
//             s[i] ='1';
//             s[i+1] = '1';
//         }
//         if(s[i] == 'B' and s[i+1] == 'A'){
//             s[i] = '2';
//             s[i+1] = '2';
//         }
//     }

//     size_t found = s.find("11");
//     size_t found2 = s.find("22");
//     if (found != string::npos and found2 != string::npos) {
//        cout<<yes<<endl;
//     }
//     else{
//         if(s.find('A')!=  string::npos or s.find('B')!=  string::npos )
//        {
//         cout<<yes<<endl;
//        }else{
//         cout<<no<<endl;
//        }
//     }
//     cout<<s;
// }

int main(){
    string s;cin>>s;
    ll l=s.length();
    ll ab=0,ba=0;
    ll somossa = 0;
    for(ll i = 0;i<l;i++){
        if(s[i] =='A' and s[i+1] =='B'){
            ab++;
            if(s[i-1]== 'B'){
                somossa++;
            }
        }
        if(s[i]=='B' and s[i+1] == 'A'){
            if(s[i-1] == 'A'){
                somossa++;
            }
            ba++;
        }
    }
    if(ab>=1 and ba>=1 and l > 3){

        ll t = abs(max(ab,ba) - somossa);
        if(somossa and t == 0){
            cout<<no<<endl;
        }else{
            cout<<yes;
        }
    }else{
        cout<<no;
    }
    // debug(ab);
    // debug(ba);
    // debug(somossa)
}