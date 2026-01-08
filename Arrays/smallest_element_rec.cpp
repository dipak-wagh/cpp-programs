#include<iostream>
using namespace std;

int min_element(int arr[],int n){
    if(n==1)
    return arr[0];
return min((arr[n-1],min_element(arr,n-1)));
}
int main()
{
    int arr[]={34,5,89,90,56};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<min_element(arr,n);
return 0;
}