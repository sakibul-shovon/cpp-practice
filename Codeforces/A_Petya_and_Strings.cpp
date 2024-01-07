// File Name: A_Petya_and_Strings.cpp
// Date: 2023-11-27
// Time: 22:56:31

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    string a,b;cin>>a>>b;

    for(int i=0;i<a.length();i++){
        a[i] = tolower(a[i]);
        b[i] = tolower(b[i]);
        if(a[i] < b[i] ){
            cout<<-1<<endl;return 0;
        }
        else if(a[i] > b[i]){
            cout<<1<<endl;return 0;
        }
    }
    cout<<0<<endl;

    return 0;
}
