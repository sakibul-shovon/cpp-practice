// File Name: A_Anton_and_Danik.cpp
// Date: 2023-07-17
// Time: 19:23:22

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n; cin>>n;
    int count1=0;
    int count2 = 0;

    for(int i=1;i<=n;i++)
    {
        char c;
        cin>>c;

        if(c == 'A') count1++;
        else{
            count2++;
        }
    }

    if(count1 > count2)
    {
        cout<<"Anton"<<endl;
    }

    else if(count1 < count2)
    {
        cout<<"Danik" <<endl;
    }

    else{
        cout<<"Friendship"<<endl;
    }
    return 0;
}
