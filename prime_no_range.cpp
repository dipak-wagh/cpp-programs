//Prime numbers in range
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,i,j;
    cout<<"ENter the Range:";
    cin>>num1>>num2;

    for(i=num1;i<=num2;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            break;
        }
        if(i==j)
    cout<<j<<" ";
    }



return 0;
}