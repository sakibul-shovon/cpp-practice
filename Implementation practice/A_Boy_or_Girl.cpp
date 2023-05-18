// File Name: A_Boy_or_Girl.cpp
// Date: 2023-05-18
// Time: 01:26:39

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;
    int count = 0;

    sort(s.begin(),s.end());

    for(int i = 0;i<s.size();i++){
        if(s[i] != s[i+1]){
            count++;
        }
    }

    if(count%2 == 0){
        cout<<"CHAT WITH HER!"<<endl;
    }
    else{
        cout<<"IGNORE HIM!"<<endl;
    }



    return 0;
}
