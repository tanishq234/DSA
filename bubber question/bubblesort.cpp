#include<iostream>
using namespace std;

void bubblesort(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

int main()
{
    int arr[5]={6,2,8,4,10};

    int n=sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    bubblesort(arr,n);
    cout<<"sorted array"<<endl;

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;
    }

    return 0;


}