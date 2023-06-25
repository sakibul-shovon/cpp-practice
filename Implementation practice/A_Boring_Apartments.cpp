// File Name: A_Boring_Apartments.cpp
// Date: 2023-06-25
// Time: 11:58:06

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int N = n;

        int digit = n%10;
        int count = 0;

        while(n>0)
        {
            n = n/10;
            count++;
        }

        switch(count){
            case 1: cout<<(digit*10)-10+1<<endl;
                    break;
            case 2: cout<<(digit*10)-10+3<<endl;
                    break;
            case 3: cout<<(digit*10)-10+6<<endl;
                    break;
            case 4: cout<<(digit*10)-10+10<<endl;
                    break;
        }

    }



    return 0;
}
