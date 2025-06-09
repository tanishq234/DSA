#include<iostream>
using namespace std;
int lastoccurence(int arr[],int n ,int key) {
	int start=0;
	int end=n-1;
	int mid=(start+end)/2;
	int ans=-1;
	
	while(start<=end)
	{
		if(arr[mid]==key)
		{
			ans=mid;
			start=mid+1;;
		}
		else if(arr[mid]>key)
		{
			end=mid-1;
		}
		else{
			start=mid+1;
		}
		mid=(start+end)/2;
	}
	return ans;
}

int main()
{
	int even[5]={1,2,3,4,5};
	cout<<"last occurence of 3 is at index"<<lastoccurence(even,5,3)<<endl;
	return 0;
}
