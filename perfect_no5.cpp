#include<iostream>
using namespace std;

static int sum=0;
int getSumDivisors(long num,int i)
{
    if(i<=num/2)
    {
        if(num%i==0)
        sum=sum+i;
    i++;
    getSumDivisors(num,i);
    }
    return sum;
}
int main()
{
    int num=28;

    if(getSumDivisors(num,1) == num)
    cout<<num<<" is a perfect number.";
else
cout<<num<<" is not a perfect number.";
return 0;
}