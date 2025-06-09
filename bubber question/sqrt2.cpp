#include<iostream>
using namespace std;
long long int mySqrt(int x) {
        int s=0;
        int e=x;
        long long int ans=-1;
        long long int mid=s+(e-s)/2;
        while(s<=e)
        {
            if(mid*mid==x)
            {
                return mid;
            }
            else if(mid*mid>x)
            {
                e=mid-1;
            }
            else{
                s=mid+1;
                ans=mid;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }

    double moreprecision(int n,int precision,int tempsol)
    {
        double factor=1;
        double ans=tempsol;

        for(int i=0;i<precision;i++)
        {
              factor=factor/10;

        for(double j=0;j*j<n;j=j+factor)
        {
            ans=j;
        }
    }
    return ans;
    }
    

    int main()
    {
        int x;
        cout<<"enter the number"<<endl;
        cin>>x;

        int tempsol=mySqrt(x);
        cout<<"ans is"<<moreprecision(x,3,tempsol)<<endl;

        return 0;
    }