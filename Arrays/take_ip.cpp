#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many array elements required:";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"The array elements are:";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }


return 0;
}