#include<iostream>
using namespace std;

char tolowercase(char ch)
{
    if(ch>='a' && ch<='z')
    {
        return ch;
    }
    else{
        char temp=ch-'A'+'a';
        return temp;
    }
}

bool checkpalindrome(char a[],int n)
{
    int s=0;
    int e=n-1;

    while(s<=e)
    {
        if(a[s]!=a[e])
        {
            return 0;
        }
        else{
            s++;
            e--;

        }
    }
    return 1;
} 

    int main()
    {
        char name[20];
        cout<<"enter your name"<<endl;
        cin>>name;

        cout<<"your name is";
        cout<<name<<endl;

        cout<<"palindrome or not:"<<checkpalindrome(name)<<endl;

        cout<<"character is"<<tolowercase('b')<<endl;
        cout<<"character is"<<tolowercase('C')<<endl;

        return 0;
    }
