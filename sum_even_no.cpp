#include<iostream>
using namespace std;

int main()
{
    int n, i = 1, sum = 0; 
    cout << "Enter number: ";
    cin >> n;

    while(i <= n)
    {
        sum = sum + i;  
        i = i + 2;     
    }

    cout << "Sum is: " << sum << endl;

    return 0;
}
