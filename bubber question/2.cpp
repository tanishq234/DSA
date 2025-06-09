#include<iostream>
using namespace std;

void printarray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
 int finduniquesol(int *arr,int size) {
 int ans=0;
 
    for(int i=0;i<size;i++)
    {
          ans=ans^arr[i];
    }
    return ans;
 }
 int main()
 {
    int arr[7]={2,3,1,6,3,6,2};
    finduniquesol(arr,7);
    printarray(arr,7);

    return 0;
 }