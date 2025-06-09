#include<iostream>
using namespace std;
int main()
{
	char ch;
	cout<<"enter any charcter"<<endl;
	cin>>ch;
	if(ch>='a' && ch<='z')
	{
		cout<<"lower case"<<endl;
	}
	else if(ch>='A' && ch<='Z')
	{
		cout<<"upper case"<<endl;
	}
	else if(ch>='0' && ch<='9')
	{
		cout<<"numeric"<<endl;
	}
	else{
		cout<<"special charcater"<<endl;
	}
	return 0;
	
}
