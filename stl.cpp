#include<iostream>
#include<set>
using namespace std;
 int main{
 	set<int>s;
 	s.insert(1);
 	s.insert(2);
	 
	 for(auto i:s) {
	 	cout<<i<<endl;
	 } 
	 return 0;
 }
