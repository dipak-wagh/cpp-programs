#include<iostream>
using namespace std;
int main()
{
    int num=28,sum=0;
    int i=1;

    while(i<=num/2) //1<=14,2<=14, 3<=14,4<=14, 
    {
        if(num%i==0)//28%1==0, 28%2==0, 28%3==0, 28%4==0
        sum=sum+i;//sum=3+4=7
    i++;          //i=3,4
    }
    if(sum==num)
    cout<<num<<" is a perfect number.";
else
cout<<num<<" is not a perfect number.";
return 0;
}