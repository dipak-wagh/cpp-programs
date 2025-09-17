//print all elements till n from 1
#include<iostream>
using namespace std;
int main()
{
    int n,sum=0;
    cout<<"enter the number:";
    cin>>n;
//     int i=1;
//     for(;;){
//         if(i<=n){        
//         cout<<i<<endl;
//         }
//         else{
//             break;
//         }
//         i++;
//     }
// return 0;
for(int a=0,b=1;a>=0 && b>=1;a--,b--){
    cout<<a<<" "<<b<<endl;
}
}