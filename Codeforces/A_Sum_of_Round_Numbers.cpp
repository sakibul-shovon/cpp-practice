// File Name: A_Sum_of_Round_Numbers.cpp
// Date: 2022-11-09
// Time: 12:51:14
//https://codeforces.com/problemset/problem/1352/A

#include <bits/stdc++.h>
using namespace std;
int main(){
    int T;
 cin>>T;
 while(T--)
 {
    vector <int> ans;
    int n,x=1;
    cin>>n;

    while (n!=0)
    {
        x=x*10;
        int rem=n%x;
        if(rem!=0)
        {
            ans.push_back(rem);
            
        }
        n=n-rem;
       
        /* code */
    }

    cout<<ans.size()<<endl;

    for(int i=0;i<ans.size();i++ )
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    
 }

return 0;
}
