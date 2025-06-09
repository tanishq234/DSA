#include<iostream>
using namespace std;
void leftrorate(int nums,int k,int d)
{
    int d;
        d=d%k;

        int temp[d];
        for(int i=0;i<d;i++)
    {
        temp[i]=nums[i];
    }
    for(int i=d;i<k;i++)
    {
        nums[i-d]=nums[i];
    }
    for(int i=k-d;i<k;i++)
    {
        nums[i]=temp[i-(k-d)];
    }
        
    }