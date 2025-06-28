#include<iostream>
using namespace std;

void reverseRecursive(int arr[],int start,int end)
{
    if(start>=end)
    return;

    int temp=arr[start];
    arr[start]=arr[end];
    arr[end]=temp;

    reverseRecursive(arr,start+1,end-1);
}
int main()
{
    int arr[]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);

    reverseRecursive(arr,0,n-1);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";



return 0;
}