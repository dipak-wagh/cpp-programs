#include<bits/stdc++.h>
using namespace std;
int main()
{
set<int>s;
int arr[]={10,50,20,60};
int n=sizeof(arr)/sizeof(arr[0]);
for(int i=0;i<n;i++)
s.insert(arr[i]);
for(auto it=s.begin();it!=s.end();it++)
cout<<*it<<" ";
return 0;
}