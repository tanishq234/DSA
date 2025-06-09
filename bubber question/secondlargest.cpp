#include<iostream>
using namespace std;

int secondlargest(int arr[],int n)
{
    int largest=arr[0],secondlargest=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>largest)
        {
            secondlargest=largest;
            largest=arr[i];
        }
        else if(arr[i]<largest && arr[i]>secondlargest)
        {
            secondlargest=arr[i];
        }
    }
    return secondlargest;
}

int main()
{
    int arr[]={3,2,1,5,2};
    int n = sizeof(arr) / sizeof(arr[0]); 
    cout << "second Largest element in given array is " << secondlargest(arr, n); 

    return 0;
}