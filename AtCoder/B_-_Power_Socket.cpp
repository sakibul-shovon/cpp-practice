#include <iostream>

using namespace std;

int main()
{
    int a,b; cin>>a>>b;

    int ans=0;
    int outlet=1;

    while(outlet<b){
        outlet--;
        outlet=outlet+a;
        ans++;
    }

    cout<<ans<<endl;
}
