// File Name: A_Two_Vessels.cpp
// Date: 2023-10-07
// Time: 23:58:59

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        int min,max;
        if(a>b){
            min =  b;
            max = a;
        }
        else{
            max = b;
            min = a;
        }

        int count = 0; 
        // if(min == max){
        //     continue;
        // }
        while(min<max){
            max = max - c;
            min = min + c;
            count++;
        }

        cout<<count<<endl;
    }
    return 0;
}
