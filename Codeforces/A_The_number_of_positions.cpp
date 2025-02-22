// File Name: A_The_number_of_positions.cpp
// Date: 2025-01-13
// Time: 03:10:35

#include <bits/stdc++.h>
using namespace std;
int main()
{

    int n, a, b;
    cin >> n >> a >> b;
    //cout << n - a << endl;
    if(n-a < n-b){
        cout<<n-(n-b)+1<<endl;
    }else{
        cout<<n-a<<endl;
    }
    return 0;
}
