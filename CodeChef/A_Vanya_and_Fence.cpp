// File Name: A_Vanya_and_Fence.cpp
// Date: 2023-07-14
// Time: 11:27:13

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int a,b;//a total b height
    cin>>a>>b;
    int ans = 0;
    for(int i=1;i<=a;i++)
    {
        int x;
        cin>>x;
        if(x>b)
        {
            ans = ans + 2;
        }
        else{
            ans = ans + 1;
        }
    }

    cout<<ans<<endl;
    return 0;
}
