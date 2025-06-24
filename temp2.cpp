#include<iostream>
using namespace std;
int main()
{
    int num,count=0;
    cout<<"Enter the number:";
    cin>>num;
    for(int i=0;i<num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }
    if(count==2)
    {
        cout<<"Prime number";
    }
    else
    {
        cout<<"Not Prime Number";
    }
return 0;
}