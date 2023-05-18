// File Name: A_Helpful_Maths.cpp
// Date: 2023-05-18
// Time: 10:44:00

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s;
    cin>>s;

    for(int i=0;i<s.size();i=i+2){
        for(int j=0;j<s.size()-1;j=j+2){
            if(s[j]>s[j+2]){
                swap(s[j],s[j+2]);
            }
        }
    }

    cout<<s<<endl;


    return 0;
}
