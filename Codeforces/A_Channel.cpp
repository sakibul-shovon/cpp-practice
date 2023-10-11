// File Name: A_Channel.cpp
// Date: 2023-10-11
// Time: 16:59:06

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
        int temp;           \
        cin >> temp;        \
        v.push_back(temp);  \
    }

int main()
{
    int ttt =1;
    fastio;
    int n;
    cin >> n;
    while (n--)
    {

      
        int n, a, q;
        cin >> n >> a >> q;

        string v;
        cin >> v;

        int countplus = 0, countminus = 0;

        For(0, v.length())
        {
            if (v[i] == '+')
                countplus++;
            else
                countminus++;
        }

        //cout<<countplus<<countminus;

        if (n == a)
        {
            cout << yes << endl;
            continue;
        }

        
        else
        {
            int max = a + countplus ;
            int min = a ; 
            
            int countMinus = 0;


            int check = 0;


            for(int i=0;i<v.length();i++){
                if(v[i] == '+') {
                    min = min + 1;
                }
                else if(v[i] == '-'){
                    min = min - 1;
                    countminus++;
                    
                }
               
               if(min == n){
                cout<<yes<<endl;
                break;
               }


            }

             if(min == n){
                
                continue;;
               }


           
            
         

            if(countMinus = 0 ){
                min = max;
            }

            if (max >= n && min >= n)
            {
                cout << yes << endl;
            }

            else if (max >= n && min < n)
            {
                cout << "MAYBE" << endl;
            }

            else
            {
                cout << no << endl;
            }
            
        }
       

       
    }


return 0;
}