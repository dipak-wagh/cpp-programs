// #include<iostream>
// using namespace std;
// int main()
// {
//     int arr[5]={12,3,56,6};
//     int max=arr[0];
//     for(int i=1;i<4;i++){
//         if(arr[i]>max){
//             max=arr[i];
//         }
//     }
//     cout<<"MAximum element is:"<<max;



// return 0;
// }

#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"how many elements required:";
    cin>>n;
    int arr[n];
    cout<<"Insert the array elements:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"Maximum element in array is:"<<max<<endl;
    cout<<"Minimum element in array is:"<<min;



return 0;
}