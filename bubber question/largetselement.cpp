#include<iostream>
using namespace std;
int largestelement(int arr[],int n)
{

int largest=arr[0];
for(int i=0;i<n;i++)
{
    if(arr[i]>largest)
    {
        largest=arr[i];
    }
}
return largest;
}
int main()
{
    int arr[]={3,2,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "Largest element in given array is " << largestelement(arr, n); 

    return 0;
}

