#include<iostream>
using namespace std;

int binarysearch(int arr[],int size,int key)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s/2);

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            return key;
        }
       if(key>arr[mid])
       {
        s=mid+1;
       }
       else{
        e=mid-1;
       }
       mid=(s+e)/2;

    }
    return -1;
    
}

int main()
{
    int even[6]={2,4,6,8,10,12};
    int odd[5]={3,5,7,9,11};

    int evenindex=binarysearch(even,6,12);

    cout<<" Index of 12 is "<< evenindex <<endl;


    return 0;
}