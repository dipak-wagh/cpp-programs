//reverse a number using recursion
#include<iostream>
using namespace std;
int reverse_num(int num,int rev=0)
{
    if(num==0)
    return rev;
return reverse_num(num/10,rev*10+num%10);
}

int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;

    int reversed=reverse_num(number);
    cout<<"Reversed Number:"<<reversed<<endl;
return 0;
}