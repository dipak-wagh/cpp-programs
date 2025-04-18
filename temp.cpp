#include<iostream>
using namespace std;

int checkHarshad(int num)
{
    int sum=0;
    int temp=num;

    while(temp!=0){
        sum=sum+temp%10;
        temp/=10;
    }
    return num%sum == 0;

}
int main()
{
    int n=153;
    if(checkHarshad(n))
    cout<<n<<" is a harshad number";
else
cout<<n<<" is not a harshad number";
return 0;
}