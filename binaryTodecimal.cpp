#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int n;
    cin>>n;  //1010
    int i=0,ans=0;
    while(n!=0){//1010 101 10 1
        int digit=n%10;  //1010 % 10 =0  101 % 10=1 10 % 10=0 1%10=1

        if(digit == 1){
            ans=ans+pow(2,i); //2^1=2  2+2^3=8 2+8=10
        }

        n=n/10; //101  10 1 1/10=0
        i++;    //1 2 3 4
    }
    cout<<ans<<endl; //10



return 0;
}