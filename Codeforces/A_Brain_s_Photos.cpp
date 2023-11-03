// File Name: A_Brain_s_Photos.cpp
// Date: 2023-10-29
// Time: 00:04:09

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a,b;cin>>a>>b;
    int temp = a*b;
    int arr[temp];
    char c;
    
    for(int i=0;i<temp;i++){
        cin>>c;

        if(c == 'C' || c=='M' || c=='Y'){
            cout<<"#Color"<<endl;
            return 0;
        }
    }

    cout<<"#Black&White"<<endl;

    return 0;
}
