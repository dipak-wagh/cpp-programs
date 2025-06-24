#include<iostream>
using namespace std;
int main()
{
    int n,i=2,count=0;
    cout<<"Enter number:";
    cin>>n;
    while(i<n)
    {
        if(n%i==0)
        {
        count++;
        }
        i++;
    }
    if(count==0)
    cout<<"Prime";
else
cout<<"Not Prime";
    



return 0;
}