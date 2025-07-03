//frequency of element in array:
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={50,10,40,0,30};
    int n=sizeof(arr)/sizeof(arr[0]);
    int visited[n];
    for(int i=0;i<n;i++){
        if(visited[i]!=1){
            int count=1;
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    count++;
                    visited[j]=1;
                }
            }
            cout<<arr[i]<<" Occurs at "<<count<<" times "<<endl;
        }
    }
    return 0;



return 0;
}