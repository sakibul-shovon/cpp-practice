// File Name: A_Fox_And_Snake.cpp
// Date: 2022-11-09
// Time: 18:04:33
//https://codeforces.com/problemset/problem/510/A
#include <bits/stdc++.h>
using namespace std;
int main(){
    int  row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if(i%4==2){
                if(j==col) cout<<"#";
                else cout<< ".";
            }

            else  if(i%4==0)
            {
                if(j==1) cout<<"#";
                else cout<<".";
            }

            else {
                cout<<"#";
            }
        }
        cout<<endl;
    }
}
