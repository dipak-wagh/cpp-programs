#include<iostream>
using namespace std;
int count_digits(int number);
bool is_armstrong(int number);
int power(int x,int y);
int main()
{
if(is_armstrong(153))
{
    cout<<"153 is an Armstrong number."<<endl; 
}

return 0;
}
int count_digits(int number)
{
    int digits=0;
    while(number!=0)
    {
        number=number/10;
        digits++;
    }
    return digits;
}

bool is_armstrong(int number)
{
    int total_digits=count_digits(number);
    int sum=0;
    int temp=number;

    while(temp!=0)
    {
        int digit=temp%10;
        temp=temp/10;
        sum+=power(digit,total_digits);
    }
    return sum==number;
}
int power(int x,int y)
{
    int result=1;
    for(int i=0;i<y;i++)
    {
        result *=x;
    }
    return result;
}