// *
// **
// ***
// ****
#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the number:";
    cin>>num;
    // for(int i=1;i<=num;i++){
    //     for(int j=1;j<=i;j++){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    int i=1;
    while(i<=num){
        int j=1;
        while(j<=i){
           cout<<"*";
           j=j+1;
        }
        cout<<endl;
        i=i+1;
    }



return 0;
}