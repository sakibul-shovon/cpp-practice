// File Name: A_Erasing_Zeroes.cpp
// Date: 2023-06-25
// Time: 15:18:44

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;
    cin>>t;

    while(t--)
    {
        string s;
        cin>>s;

        int first =0,last = 0;

        for(int i=0;i<=s.length();i++)
        {
            if(s[i] == '1')
            {
                first = i;
                break;
            }
        }

        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i] == '1'){
                last = i;
                break;
            }
        }

        int count = 0;
        for(int i=first;i<last;i++)
        {
            if(s[i] == '0')
            {
                count++;
            }
        }
        cout<<count<<endl;
    }

    
    return 0;
}
