// // File Name: Chef_Drinks_Tea.cpp
// // Date: 2023-09-11
// // Time: 01:03:50

// #include <bits/stdc++.h>
// using namespace std;
// int main(){
    
//     int t;cin>>t;

//     while(t--)
//     {
//         int x,y,z;
//         cin>>x>>y>>z;
        
//         int sum = 0;
//         while(true)
//         {
//             if(y == 0)
//             {
                
//                 break;
//             }

//             else if(y>= x)
//             {
                
//                 sum = sum + z;
//                 break;
//             }

//             sum = sum + z;
//             y = y+y;
//         }

//         cout<<sum<<endl;
//     }
//     return 0;
// }






#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll x, y, z;
        cin >> x >> y >> z;

        if (x > y)
        {
            double refill = ceil(x.00 / y); cout<<refill << x << y <<endl;
            ll cost = refill * z;
            cout << cost << endl;
        }
        else
        {
            cout << z << endl;
        }
    }

    return 0;
}