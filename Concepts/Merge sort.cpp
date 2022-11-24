//Threr is some issue in this code .if I assain n=8 then working without last digit.but when i use n=9 then showing random ans




#include <bits/stdc++.h>
using namespace std;

void merge(int arr[],int start,int mid ,int end)
{
    
    int arr2[end-start+1];
    int i=start;
    int j=mid+1;
    int k=0;

    while(i<=mid && j<=end)
    {
        if(arr[i]<=arr[j] ){
            arr2[k]=arr[i];
            i++;
            k++;
        }

        else{
            arr2[k]=arr[j];
            j++;
            k++;
        }
        
    }

    if(i>mid){
        while(j<=end){
            arr2[k]= arr[j];
            j++;
            k++;
        }
    }

    else{
        while(i<=mid){
            arr2[k]=arr[i];
            i++;
            k++;
        }
    }

    //---------copy-----------------
    
    // while (i <= mid)
	// {
	// 	arr2[k] = arr[i];
	// 	k++;
	// 	i++;
	// }
 
	// // Insert all the remaining values from j to high into temp[].
	// while (j <= end)
	// {
	// 	arr2[k] = arr[j];
	// 	k++;
	// 	j++;
	// }

    //----copyyyyyyyy--------
 

    for (i = start; i <= end; i++)
	{
		arr[i] = arr2[i-start];
    }
     
}


void mergeSort(int arr[], int start,int end)
{
    if(start < end)
    {
        int mid=(start+end)/2;
        mergeSort(arr,start,mid);
        mergeSort(arr,mid+1,end);
        merge(arr,start,mid,end);
    }
 
}

int main()
{
   int arr[]={15,5,24,8,1,3,16,10,20};
    int n=8;
    mergeSort(arr,0,n);

     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}