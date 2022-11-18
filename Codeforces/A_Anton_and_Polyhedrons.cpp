// File Name: A_Anton_and_Polyhedrons.cpp
// Date: 2022-11-09
// Time: 18:31:14

#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string arr[t];
    for (int i = 0; i < t; i++)
    {
        cin>>arr[i];
    }

    int sum=0;

    for(int i=0;i<t;i++)
    {
        if(arr[i]=="Tetrahedron"){
            sum=sum+4;
        }

        else if(arr[i]=="Cube"){
            sum=sum+6;
        }

        else if(arr[i]=="Octahedron")
        {
            sum=sum+8;
        }

        else if(arr[i]=="Dodecahedron")
        {
            sum=sum+12;
        }

        else if(arr[i]=="Icosahedron")
        {
            sum=sum+20;
        }
    } 
    
    cout<<sum<<endl;

return 0;
}
