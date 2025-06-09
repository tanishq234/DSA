#include<iostream>
using namespace std;
void printarray(int arr[],int size)
{
	cout<<"print array"<<endl;
for(int i=0;i<size;i++)
{
cout<<arr[i]<<endl;
}
cout<<"printing done"<<endl;
}
int main()
{
	int thrid[15]={2,3};
	int n=15;
	printarray(thrid,15);
	
	int fourth[10]={0};
	n=10;
	printarray(fourth,10);
	
	int fifth[10]={1};
	n=10;	
	printarray(fifth,10);
	return 0;
}
