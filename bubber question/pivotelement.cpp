#include<iostream>
using namespace std;
int pivotelement(int arr[],int size)
{
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;

    while(s<e)
    {

    if(arr[mid]>=arr[0])
    {
        s=mid+1;
    }
    else{
        e=mid;
    }
    mid=s+(e-s)/2;
    }
return s;
}

int main()
{
    int arr[5]={8,10,17,1,3};

    cout<<"pivot is "<<pivotelement(arr,5)<<endl;

    return 0;
}