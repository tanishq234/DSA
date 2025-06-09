#include<iostream>
using namespace std;

void sortedarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]>=arr[i-1])
        {

        }
    }
}

int main()
{
    int arr[]={1,3,2,5,4};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"original array is";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;

        sortedarray(arr,n);

        cout<<"sorted array";
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}