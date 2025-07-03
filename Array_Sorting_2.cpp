//sort the array
#include<bits/stdc++.h>
using namespace std;
void sorted(int arr[],int n){
    sort(arr,arr+n);

    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
int main()
{
    int arr[]={10,30,20,50,40,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    sorted(arr,n);
return 0;
}