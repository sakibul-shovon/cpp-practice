// File Name: A_Gennady_and_a_Card_Game.cpp
// Date: 2023-06-08
// Time: 01:55:51

#include <bits/stdc++.h>
using namespace std;


bool f1(string c,string s)
{
    if (c[0] ==s[0]){
        return 1;
    }

    else{
        return 0;
    }
}

bool f2(string c,string s)
{
    if (c[1] ==s[1]){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    
    string s;
    cin>>s;

    int sum = 0;

    for(int i=0;i<5;i++){
        string c;
        cin>>c;
        if(f1(c,s)){
            sum++;
        }

        if(f2(c,s)){
            sum++;
        }
    }

    if(sum >= 1){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}



// better  solution

//     int i,j,k;
//     int n,m;

//     string s, x;
//     cin>>s;

//     for(i=0;i<5;i++)
//     {
//         cin>>x;
//         if(x[0]==s[0] || x[1]==s[1])
//         {
//             cout<<"YES\n";
//             return 0;
//         }
//     }

//     cout<<"NO";

//     return 0;
// }