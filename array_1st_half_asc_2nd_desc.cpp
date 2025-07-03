//Sort an array first half ascending and second half in descending order
#include<iostream>
using namespace std;
void ascDecFunc(int a[], int n)
{
    int temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n/2;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }

        for(int j=n/2;j<n-1;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main()
{
    int arr[]={10,6,5,18,24,11};
    int len=sizeof(arr) / sizeof(arr[0]);
    ascDecFunc(arr,len);

    return 0;



return 0;
}