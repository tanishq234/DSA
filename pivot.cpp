#include<iostream>
using namespace std;
int getpivot(int arr[],int n)
{
	int s=0;
	int end=n-1;
	int mid=(s+end)/2;
	
	while(s<end)
	{
		if(arr[mid]>arr[0])
		{
		s=mid+1;
		}
	 else{
		end=mid;
		}
	 mid=(s+end)/2;
    }
return s;
}
int main()
{
	int arr[5]={3,8,10,17,1};
	
	cout<<"pivot element is"<<getpivot(arr,5)<<endl;
	return 0;
	
}
