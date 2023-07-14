// File Name: A_Repeating_Cipher.cpp
// Date: 2023-06-28
// Time: 01:15:46

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    string s;
    for(int i=0;i<n;i++) cin>>s[i];

    vector<string> ans;
    int place = 0;

    for(int i=0;place<n;i++)
    {
        place = place + i ;
        ans.push_back(s[place-1]);

    }

    cout<<ans<<endl;

    

    return 0;
}

