#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,50,20,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int visited[n],count_dis=0;

    for(int i=0;i<n;i++)
    {
        if(visited[i]!=1){
            for(int j=i+1;j<n;j++){
                if(arr[i]==arr[j]){
                    visited[j]=1;
                }
            }
            count_dis++;
        }
    }
    cout<<count_dis;
}