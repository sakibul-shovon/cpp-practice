// File Name: Calculating Power using Recursion.cpp
// Date: 2022-11-19
// Time: 01:43:50

#include <bits/stdc++.h>
using namespace std;

int power(int a,int b)
{
    if (b == 0) return 1;
    if(b == 1)  return a;

    int ans=power(a,b/2);
    if(b%2 == 0){
        return ans*ans;
    }

    else{
        //odd
        return a*ans*ans; 
    }
}

int main(){
    
   int a,b;
   cin>>a>>b;

   int ans=power(a,b);
   cout<<"Ans is : "<<ans<<endl;
return 0;
}
