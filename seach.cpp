#include<iostream>
using namespace std;
bool search(int arr[],int size,int key) {
	
}


int main()
{
	int arr[10]={2,3,4,1,8,9,7,5,6,10};
	cout<<"enter element to search for"<<endl;
	int key;
	cin>>key;
	bool found=search(arr,10,key);
	if(found)
	{
		cout<<"key is present"<<endl;
	}
	else
	{
		cout<<"key is absent"<<endl;
	}
	return 0;
}
