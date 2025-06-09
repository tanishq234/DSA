#include<iostream>
using namespace std;

void reversearray(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<=e)
    {
        int temp=arr[s];
        arr[s]=arr[e];
        arr[e]=temp;

        s++;
        e--;


    }
    

}

int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
     
    cout<<"orignal array"<<endl;

    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;

        reversearray(arr,size);

        cout<<"reversed array"<<endl;

        for(int i=0;i<size;i++)
        {
            cout<<arr[i]<<endl;

        }
    }
    return 0;
}