#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,40,20,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int mini=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]<mini)
        mini=arr[i];
    }
    cout<<mini;
return 0;
}