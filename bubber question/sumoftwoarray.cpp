#include<iostream>
using namespace std;

void sumoftwoarray(int a,int n,int b,int m)
{
    int i=n-1;
    int j=m-1;
    int ans=0;

    int carry=0;

    while(i>=0 && j>=0)
    {
        int val1=a[i];
        int val2=b[j];

        int sum=val1+val2+carry;

        carry=sum/10;
        sum=sum%10;
        ans=sum;

        //first case
        while(i>=0)
        {
            int sum=a[i]+carry;
            carry=sum/10;
            sum=sum%10;
            ans=sum;
            i--;
        }

        //second case

        while(j>=0)
        {
            int sum=b[j]+carry;
            carry=sum/10;
            sum=sum%10;
            ans=sum;
            j--;

        }

        //thrid case

        while(carry!=0)
        {
            int sum=carry;
            carry=sum/10;
            sum=sum%10;
            ans=sum;
        }


    }

    int main()
    {
        int arr[]={3,7,5,1,6}
        int n=
    }
}