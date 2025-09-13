#include<iostream>
using namespace std;
int main()
{
    int arr[30],n,max;
    cout<<"how many array elements:";
    cin>>n;
    cout<<"Insert array elements:";
    for(int i=0;i<n;i++)
    {
    cin>>arr[i];
    }
    cout<<"Array elements are:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<endl;
    }
    cout<<endl;
    max=arr[0];
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    cout<<"max is:"<<max;



return 0;
}