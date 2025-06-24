#include<iostream>
using namespace std;
int main()
{
    int n=3;
    int matrix[3][3]={{1,2,3},
                       {4,5,6},
                       {7,8,9}};
    int primarySum=0,secondarySum=0;

    //calculate sum
    for(int i=0;i<n;i++)
    {
        primarySum+=matrix[i][i];
        secondarySum+=matrix[i][n-1-i];
    }

    cout<<"Primary Sum is:"<<primarySum<<endl;
    cout<<"Seconadary Sum is:"<<secondarySum<<endl;

return 0;
}