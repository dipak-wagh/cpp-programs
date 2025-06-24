#include<iostream>
using namespace std;
int findHCF(int,int);
int main()
{
    int num1=36,num2=60;
    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<findHCF(num1,num2);
    return 0;
}

int findHCF(int num1,int num2)
{
    if(num1==0 || num2==0)
    {
        return (num1+num2);
    }
    if(num1==num2)
    {
        return num1;
    }
    if(num1>num2)
    {
        return findHCF(num1-num2,num2);
    }
    else
    {
        return findHCF(num1,num2-num1);
    }
}
