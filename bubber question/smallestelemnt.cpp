#include<iostream>
using namespace std;

int smallestelement(int arr[],int n)
{
    int smallest=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>smallest)
        {
            arr[i]=smallest;

        }
    }
    return smallest;
}

int main()
{
    int arr[]={1,2,3,4,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"smallest element of an array is "<<smallestelement(arr,n)<<endl;
    return 0;
}