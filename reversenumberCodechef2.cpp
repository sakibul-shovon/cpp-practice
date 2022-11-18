#include<iostream>
using namespace std;
int main()
{
    int T,N,x,sum=0;
    cin>>T;


    for(int i=1;i<=T;i++)
    {
        cin>>N;
          while(N>0)
        {
            x=N%10;
            N=N/10;
            sum=sum*10+x;
        }
        cout<<sum<<endl;
        sum=0;

    }

}

