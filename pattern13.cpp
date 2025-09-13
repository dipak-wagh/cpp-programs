// 123
// 456
// 789
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter num:";
    cin>>num;
    int i=1;
    int count=1;
    while(i<=num){
        int j=1;
        while(j<=num){
            cout<<count<<" ";
            count=count+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



return 0;
}