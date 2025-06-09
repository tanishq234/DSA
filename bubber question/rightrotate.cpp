#include<iostream>
using namespace std;

void rightrotate(int arr[],int n)
{
    int temp=arr[n-1];
    for(int i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
        temp=arr[i];
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"original array is";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;

        rightrotate(arr,n);

        cout<<"right rotated array"<<endl;

        for(int i=0;i<n;i++)
        {
            cout<<arr[i]<<endl;
        }
    }
    return 0;

}