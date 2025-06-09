#include<iostream>
using namespace std;
void update(int arr[],int n) {
	cout<<"inside the function"<<endl;
	
	for(int i=0;i<3;i++)
	{
		cout<<arr[i]<<endl;
	}
	cout<<"going back to main fuction"<<endl;
}
int main()
{
	int arr[3]={1,2,3};
	update(arr,3);
	int i;
	for(i=0;i<3;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
