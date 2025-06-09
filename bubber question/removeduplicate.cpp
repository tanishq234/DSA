#include<iostream>
using namespace std;

int removeduplicate(int arr[],int n)
{
    int i=0;
    for(int j=1;j<n;j++)
    {
        if(arr[j]!=arr[i])
        {
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i+1;
}

int main()
{
    int arr[]={1,2,2,3,3,3};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"original array is";

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;;

        removeduplicate(arr,n);

        cout<<arr[i]<<endl;;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;;
    }
}