#include<iostream>
using namespace std;
int main()
{
    int arr[5]={23,5,1,66};
    int n=5;
    cout<<"Given array is:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"sorted array is:"<<endl;
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }




return 0;
}