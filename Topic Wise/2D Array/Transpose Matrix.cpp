// File Name: Transpose Matrix.cpp
// Date: 2023-07-22
// Time: 22:36:01

#include <bits/stdc++.h>
using namespace std;
int main(){
    
    int n,m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int transpose[m][n];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            transpose[i][j] = arr[j][i];
        }
        cout<<endl;
    }
    cout<<endl;


    //print
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<transpose[i][j]<<" ";

        }
        cout<<endl;
    }




    return 0;
}
