/*
1 2 3 4
1 2 3 4 
1 2 3 4
1 2 3 4
*/
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    int i=1; 
    while(i<=n){// 1<=4 2<=4 3<=4 4<=4 5<=4
        int j=1;  
        while(j<=n){// 1<=4 2<=4 3<=4 4<=4 5<=4
            cout<<j; // 1 2 3 4
            j++;  // j=2 3 4 5
        }
        cout<<endl;
        i++; //i=2
    }



return 0;
}