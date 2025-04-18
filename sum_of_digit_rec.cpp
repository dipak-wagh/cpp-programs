//sum of digit of a number
#include<iostream>
using namespace std;
int sum_digits(int number){
    if(number == 0) return 0;
    return number%10 + sum_digits(number/10);
}
int main()
{
    int number=0;
    cout<<"Enter a number:";
    cin>>number;

    cout<<"Digits Sum:"<<sum_digits(number)<<endl;
    return 0;
}