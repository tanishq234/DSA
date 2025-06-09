#include<iostream>
using namespace std;
int binarysearch(int n)
{
	long long int s=0;
	long long int e=n-1;
	long long int mid=(s+e)/2;
	

	int ans=-1;
	while(s<=e)
	{
		long long int square=mid*mid;
		if(square==n)
		{
			return mid;
		}
		else if(square<n)
		{
			s=mid+1;
		}
		else{
			e=mid-1;
		}
		mid=(s+e)/2;
	}
	return ans;
}
double moreprecision(int n,int precision,int tempsol) {
	double factor=1;
	double ans=tempsol;
	
	for(int i=0;i<precision;i++) {
		factor=factor/10;
		
		for(double j=ans;j*j<n;j=j+factor) {
			ans=j;
		}
	}
}
	
	int main()
	{
		int n;
		cout<<"enter the number"<<endl;
		cin>>n;
		
		int tempsol=sqrtInteger(n);
		cout<<"answer is"<<moreprecision(n,3,tempsol)<<endl;
		
		return 0;
	}

