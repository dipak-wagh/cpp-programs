#include<iostream>
using namespace std;
int main()
{
    char c;
    c='U';

    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u' ||c=='A' || c=='E' || c=='I'|| c=='o' || c=='U')
        {
        cout << c<<" is a vowel";
        }
        else
        {
            cout<<c<<" is a consonant";
        }
        return 0;
}