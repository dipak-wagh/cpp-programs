#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    int start=0,end=n-1;

    while(start < end){
        swap(arr[start++], arr[end--]);
    }


    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";


return 0;
}