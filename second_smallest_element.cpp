#include<bits/stdc++.h>
using namespace std;

int secSmallest(int arr[], int n)
{
   
   int smallest = arr[0];

   
   for (int i=0; i < n; i++){
     if(arr[i] < smallest)
       smallest = arr[i];
   }

   
   int sec_smallest = INT_MAX;

   
   for (int i=0; i < n; i++){
      if(arr[i] != smallest && arr[i] < sec_smallest)
        sec_smallest = arr[i];
   }

   return sec_smallest;

}
int main()
{
    int arr[] = {70, 40, 30, 20, 10, 90};

    int n = sizeof(arr)/sizeof(arr[0]); 

    cout<<secSmallest(arr, n);
}