#include<iostream>
using namespace std;

int getHCF(int a,int b)
{
    return b==0 ? a:getHCF(b,a%b);
}
int main()
{
    int num1=-36,num2=60;

    num1=(num1>0)?num1:-num1;
    num2=(num2>0)?num2:-num1;

    cout<<"HCF of "<<num1<<" and "<<num2<<" is "<<getHCF(num1,num2);
    return 0;
}