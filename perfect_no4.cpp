#include<iostream>
using namespace std;
 
bool checkPerfect(int n)
{
    int sum=0;
    for(int i=1;i<=n/2;i++){
        if(n%i==0)
        sum=sum+i;
    }

    if(sum==n)
    return true;
return false;
}
int main()
{
    int num=28;
    if(checkPerfect(num))
    cout<<num<<" is a perfect number.";
else
cout<<num<<" is not a perfect number.";
return 0;
}