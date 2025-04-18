//palindrome number using recursion
#include<iostream>
using namespace std;

int getReverse(int num,int rev){
    if(num==0)
    return rev;

    int rem=num%10;
    rev=rev*10+rem;
    return getReverse(num/10,rev);
}
int main()
{
    int num,reverse=0;
    num=123321;
    cout<<"\n The number is:"<<num;
    if(getReverse(num,reverse)==num)
    cout<<num<<"is Palindrome";
else
cout<<num<<"is not a Palindrome";
return 0;
}