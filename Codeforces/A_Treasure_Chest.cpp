

// File Name: A_Treasure_Chest.cpp
// Date: 2023-11-10
// Time: 00:47:02

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int x, y, k;
        cin >> x >> y >> k; // x chest
       

        if( (y<x)) cout<<x<<endl;
        else if(y>x){
            //chest age 
            if( (x+k) >= y ){cout<<y<<endl;}
            else{
                //stramina nai
                cout << (x + k) + ( (y-(x+k) ) *2) << endl;
            }
        }

        
    }
    return 0;
}
