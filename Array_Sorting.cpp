//Sort the given array
#include<iostream>
using namespace std;
void sorted(int arr[], int n);
int main()
{
  int arr[]={9,2,5,1,0,34,56};
  int n=sizeof(arr)/sizeof(arr[0]);
  sorted(arr,n);
return 0;
}

void sorted(int arr[],int n)
{
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
}
