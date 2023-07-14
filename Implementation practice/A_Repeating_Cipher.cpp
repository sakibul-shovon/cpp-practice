// File Name: A_Repeating_Cipher.cpp
// Date: 2023-06-28
// Time: 01:15:46

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n;
    cin>>n;

    string s;
    cin>>s;
    

    vector<char> ans;
    int place = 0;

    for(int i=1;place<n;i++)
    {
        place = place + i ;
        ans.push_back(s[place-1]);
    }

    for(int i=0;i<ans.size();i++)
    {
        cout<<ans[i];
    }
    
    return 0;
}

