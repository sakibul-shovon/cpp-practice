#include <iostream>
 
using namespace std;
 
int main()
{
    int arr[3],temp[3];
    for(int i=0;i<3;i++)
    {
        cin>>arr[i];
        temp[i]=arr[i];
    }
    

   
    

    for(int i=0;i<2;i++)
    {
        int min =i;
        for(int j=1;j<3;j++)
        {
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
        
        
    }

   for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<endl;
        
    }
    cout<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<temp[i]<<endl;
        
    }
    return 0;



    
    
}