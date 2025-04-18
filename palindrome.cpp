//check number is palindrome or not
#include<iostream>
using namespace std;
int main()
{
    int num,rev=0,temp,rem;
    cout<<"Enter the number:";
    cin>>num;
    temp=num;
    while(num>0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(rev==temp)
    cout<<"Palindrome Number";
else
cout<<"Not Palindrome Number";



return 0;
}