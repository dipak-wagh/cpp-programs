s#include<bits/stdc++.h>
using namespace std;


int getmax(int arr[], int n){
   if(n==1) return arr[0];

   return max(arr[n-1], getmax(arr, n-1));
}
int main(){

   int arr[]={10, 89, 67, 56, 45, 78};
   int n = sizeof(arr)/sizeof(arr[0]);

   cout<<getmax(arr, n);
}
