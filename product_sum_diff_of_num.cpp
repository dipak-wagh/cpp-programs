//124
#include<iostream>
using namespace std;
int Answer(int n){
    int digit,sum=0,prod=1;
    while(n<0){
        digit=n%10;
        sum=sum+digit;
        prod=prod*digit;
        n=n/10;
    }
    int ans=prod-sum;
    return ans;
}
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    cout<<Answer(num);
return 0;
}