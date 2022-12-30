// File Name: GPL.cpp
// Date: 2022-12-29
// Time: 19:24:47

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--){
        long long n;
        cin>>n;
        string s;cin>>s;
        int ans = 0;
        long long power = 1;

        for(long long i = n-1; i>=0;i--){
            int binary_digit = s[i] -'0';
            ans = ans + (binary_digit * power);
            power = power * 2;
        }
        cout<<ans<<endl;
    }

    return 0;
}
