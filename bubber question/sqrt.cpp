#include<iostream>
using namespace std;
int mysqrt(int x)
{
    int size;
    int s=0;
    int e=size-1;
    int mid=s+(e-s)/2;
    int n;
    int ans=0;

    while(s<e)
    {
        int square=mid*mid;
        if(square==n)
        {
            return mid;
        }
        else if(square>n)
        {
            e=mid-1;
        }
        else if(square<n)
        {
            ans=mid;
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int x=4;

    cout<<mysqrt(x)<<endl; 

    return 0;
}


