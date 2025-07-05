#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,50,20,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    unordered_map <int, int>mp;
    int count_dis=0;

    for(int i=0;i<n;i++)
    mp[arr[i]]++;
cout<<mp.size();
}