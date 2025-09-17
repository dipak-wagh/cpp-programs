//check prime number
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter number:";
    cin>>num;
    int count=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
            count++;
        }
    }
    if(count==0){
        cout<<"Prime No..";
    }
    else{
        cout<<"Not Prime Number";
    }



return 0;
}