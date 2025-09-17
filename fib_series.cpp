//0 1 1 2 3 5...
 // a b c 
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter no";
    cin>>n;
    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1;i<=n;i++){
        int c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }
    }
