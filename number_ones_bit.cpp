#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";  
    cin>>num;
    int count=0;
    while(num!=0){
        if(num&1){
            count++;
        }
        num=num>>1;
    }
    cout<<"count of "<<num<<" is: "<<count;
return 0;
}