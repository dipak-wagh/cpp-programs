//check year is leap year or not?
#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter Year:";
    cin>>year;

    if(year % 400 ==0)
    cout<<year<<" is a leap year";

    else if(year%4==0 && year%100!=0)
    cout<<year<<" is a leap year";

    else
    cout<<year<<" is not a Leap Year";



return 0;
}