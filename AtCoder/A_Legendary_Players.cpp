// File Name: A_Legendary_Players.cpp
// Date: 2023-09-11
// Time: 00:37:25

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string s1[10]={"tourist","ksun48","Benq","Um_nik","apiad","Stonefeang","ecnerwala","mnbvmar","newbiedmy","semiexp"};

    int s2[10]={3858,3679,3658,3648,3638,3630,3613,3555,3516,3481};


    string s ;
    cin>>s;

    int i=0;
    while(true)
    {
        if(s1[i] == s)
        {
            cout<<s2[i]<<endl;
            break;
        }
        i++;
    }
    return 0;
}
