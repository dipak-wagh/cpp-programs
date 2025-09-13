#include<iostream>
using namespace std;
int main()
{
    int arr[5]={1,2,3,4,5};
    cout<<"My given array elements is: ";
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Reversed Array elements is: ";
    for(int i=4;i>=0;i--){
        cout<<arr[i]<<" ";
    }


return 0;
}