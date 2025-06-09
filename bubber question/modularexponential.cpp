#include<iostream>
using namespace std;

int modularexponential(int a,int m,int n)
{
    int res=1;

    while(n>0)
    {
        if(n&1)
        {
           res=((res)%m *(a)%m)%m;
        }
        a=((a)%m * (a)%m);
        n=n>>1;
    }
}

int main()
{
    int a,b,n;
    cout<<"enter value of a,b and n"<<endl;
    cin>>a>>b>>n;

}
