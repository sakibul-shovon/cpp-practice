#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n,m;
    cin>>n>>m;
    int i =1;
    int total = n*m;
    
    while(true)
    {
        if(n - i == 0) break;
        if(m - i == 0) break;
        i++;
       
    }
    
    if(i %2 == 0){
        cout<<"Malvika"<<endl;
    }
    else{
        cout<<"Akshat"<<endl;
    }
 
    return 0;
}