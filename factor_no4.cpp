#include<bits/stdc++.h>
using namespace std;
 
void getFactors(int num)
{
    int i;
    int flag=false;
    for(int i=1;i<=sqrt(num);i++)
    {
        if(num%i==0)
        cout<<i<<" ";

        if(i==num/i)
        flag=true;
    }
    if(flag)
    i-=2;

    for(;i>=1;i--)
    {
        if(num%i == 0)
        cout<<num/i<<" ";

    }
}
int main()
{
int num=100;
getFactors(num);
}