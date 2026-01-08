#include<iostream>
using namespace std;
int maximum(int arr[],int i,int end)
{
    int max;

    if(i==end-1)
    return (arr[i]>arr[i+1]) ? arr[i]:arr[i+1];
max=maximum(arr,i+1,end);
return (arr[i]>max) ? arr[i]:max;
}
int main()
{
    int arr[]={10,80,40,23};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<maximum(arr,0,n-1);
return 0;
}