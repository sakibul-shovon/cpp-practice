// File Name: check Palindrome.cpp
// Date: 2023-06-02
// Time: 09:15:25

#include <bits/stdc++.h>
using namespace std;

bool f(int i,string &s)
{
    if(i>=s.size()) return true;

    if(s[i] != s[s.size()-i-1]) return false;
    return f(i+1,s);
}

int main(){
    string s;
    cin>>s;
    
    if(f(0,s))
        cout<<"Palindrome"<<endl;
    else
        cout<<"Not Palindrome"<<endl;

        
    return 0;
}
