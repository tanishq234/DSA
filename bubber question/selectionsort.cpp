#include<iostream>
using namespace std;

void selectionsort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        int minindex=i;
    for(int j=i+1;j<n;j++)
    {
        if(arr[j]<arr[minindex])
        {
             minindex=j;
        }
    }
    swap(arr[minindex],arr[i]);
    }
}

int main()
{
    int arr[5]={64,25,12,22,11};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
    cout<<arr[i]<<endl;
    }
    selectionsort(arr,n);
    
    cout<<"sorted array"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}