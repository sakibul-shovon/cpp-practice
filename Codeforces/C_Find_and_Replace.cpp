// File Name: C_Find_and_Replace.cpp
// Date: 2023-10-11
// Time: 22:19:42

#include <bits/stdc++.h>
using namespace std;

#define fastio       ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define ll           long long int
#define vint         vector<int>
#define vll          vector<long long int>
#define vstring      vector<string>

#define pb           push_back
#define mp           make_pair
#define pii          pair<int, int>
#define mod          1000000007
#define inf          1e18
#define PI           3.141592653589793238462

#define endl          "\n"
#define no           "NO"
#define yes          "YES"

#define For(a, n) for (int i = a; i < n; i++)
#define ForRev(a, b) for (int i = a; i > b; i--)
#define nested_incr_loop(a, b) for (int j = a; j < b; j++)
#define nested_decr_loop(a, b) for (int j = b; j > a; j--)

#define pqb          priority_queue<int>
#define pqs          priority_queue<int, vi, greater<int>>
#define gcd(a, b)    __gcd(a, b);

#define all(x)       x.begin(), x.end()
#define space        cout << ' ';

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
#define WhileVecInput(v,n)   while(n--){ int temp;cin>>temp; v.push_back(temp); }

int main()
{
    fastio;
    While(n){
        int size;cin>>size;
        
        string s;
        cin>>s;

        char replace = '0';
        

        int x = 0;
        while(s[x] != '\0')
        {
            char ch = s[x];
            for(int i=x;i<size;i++){
                //cout<<s[i]<<" ";

                if(s[i] == '1' || s[i] == '0'){
                    continue;
                }
                if(s[i] == ch)
                {
                    s[i] = replace;

                }
                
                
            }
            

            x++;
           if(x%2 == 0 ){
                replace = '0' ;
            }
            else{
                replace = '1';
            } 
            

        }

        //cout<<s<<endl;

        int a = 0,check  = 0;
        while(a < s.length() -1){
            if(s[a] == s[a+1])
            {
                cout<<no<<endl;
                check = 1;
                break;;
            }
            a++;
        }
        
        if(check != 1){
            cout<<yes<<endl;
        }
    }
    return 0;
}