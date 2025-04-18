//sum of digit of a number
#include<iostream>
using namespace std;
int main()
{
    int num,sum=0,rem;
    cout<<"Enter the numebr:";
    cin>>num;
    while(num!=0)
    {
        sum=sum+(num%10);
        num=num/10;
    }
    cout<<"The sum of digit of a number is:"<<sum<<endl;




return 0;
}