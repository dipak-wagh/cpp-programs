//factor of a number
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    num=100;
    cout<<"Factors of "<<num<<" are "<<endl;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        cout<<i<<" ";
    }
}