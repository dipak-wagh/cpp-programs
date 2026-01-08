#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"How many array elements required:";
    cin>>n;
    int arr[n];
    cout<<"Enter "<<n<<" elements:\n";
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"Maximum element in array is:"<<max;
return 0;
}