// File Name: CapitalBaazi.cpp
// Date: 2022-12-29
// Time: 11:07:15

#include <bits/stdc++.h>
using namespace std;
int main(){
        /*your code here*/
    string s;
    getline(cin,s);
    
    for(int i=0;i<s.length();i++){
        char x=s[i];
        if( s[i] == ' '){
            cout<<endl;
        }
        else{
            cout<< (char)(x-'a'+'A');
        }
    }
    
    

    return 0;
}
