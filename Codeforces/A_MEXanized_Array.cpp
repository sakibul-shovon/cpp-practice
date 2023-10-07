// 1st >= 2nd
//2nd <= 3rd

// File Name: A_MEXanized_Array.cpp
// Date: 2023-10-08
// Time: 00:49:15

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int t;cin>>t;

    while(t--){

        int sum = 0;
        int n,k,x;cin>>n>>k>>x;

        if(n>=k  )
        {
            int temp = 0;
            int i;
            for( i=0;i<k && i<= x;i++){
                sum = sum + i;
                temp++;

            }

            if(i < k)
            {
                cout<<-1<<endl;
                continue;
            }

            if(k!=x){
                sum += (n-temp)*x ;
            }
            else{
                sum += (n-temp) * (x-1);//k
            }
             cout<<sum<<endl;
        }
        else{
            cout<<-1<<endl;
        }

       
    }


    
    return 0;
}
