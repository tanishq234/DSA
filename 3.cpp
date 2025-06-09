#include<iostream>
using namespace std;

int main()
{
	int number, maximum, sum = 0;
	
	cout << "\nPlease Enter the Maximum Limit for Even Numbers  =  ";
	cin >> maximum;	
	
	cout <<"\nEven Numbers between 0 and " << maximum << " = ";
	for(number = 1; number <= maximum; number++)
	{
  		if ( number % 2 == 0 ) 
		{
  			cout << number << " ";
			sum = sum + number;
		}
	}
	
	cout << "\nThe Sum of All Even Numbers upto " << maximum << " = " << sum;
	
 	return 0;
}
