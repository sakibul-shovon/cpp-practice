// File Name: multiply.cpp
// Date: 2023-07-22
// Time: 21:14:28

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int r1,c1; cin>>r1>>c1;
    int A[r1][c1];

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl<<endl;

    int r2,c2; cin>>r2>>c2;
    int B[r2][c2];

    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cin>>B[i][j];
        }
    }
    cout<<endl<<endl;

    if(c1 != r2)
    {
        cout<<"INVALID INPUT";
        return 0;
    }

    int C[r1][c2];

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            int value = 0;
            
            for(int k=0;k<r2;k++)
            {
                value += A[i][k] * B[k][j];
            }
            C[i][j] = value;
        }
    }

    //printing ans;
    cout<<"ANS"<<endl;

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

