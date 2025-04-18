//Sum of numbers in given range
#include<iostream>
using namespace std;
int main()
{

    cout<<"Enter the range:";
    int num1,num2,sum=0;
    cin>>num1>>num2;
    for(int i=num1;i<=num2;i++)
    {
        sum=sum+i;

    }
    cout<<sum;


return 0;
}