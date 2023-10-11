// File Name: Easy_Stack.cpp
// Date: 2023-10-09
// Time: 22:31:39


#include <bits/stdc++.h>

#define fastio ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;
int main()
{
    fastio;

   int t;
   cin>>t;

   vector<int>v; 
   while(t--)
   {


        int n;cin>>n;

        
        if(n == 1) {
            int in;
            cin>>in;
            v.push_back(in);
        }

        else if (n == 2){
            
            if(!v.empty()){
                v.pop_back();
            }
        }

        else if(n == 3){
            if(!v.empty()){

               cout<<v.back()<< '\n';
            }
            else{
                cout<<"Empty!"<<'\n' ;
            }
        }
   }
}
