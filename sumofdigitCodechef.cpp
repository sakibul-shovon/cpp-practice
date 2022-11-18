#include<iostream>
using namespace std;
int main()
{
    int T,N,sum=0,x;
    cin>>T;

    for(int i=1;i<=T;i++)
    {


    cin>>N;
    while(N>0)
    {
        x=N%10;
        sum=sum+x;
        N=N/10;
    }
    cout<<sum<<endl;
    sum=0;

    }



return 0;

}
