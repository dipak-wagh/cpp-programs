#include<iostream>
using namespace std;
int string_length(char* p){
    int count=0;
    while(*p!='\0'){
        count++;
        p++;
    }
    return count;
}
int main()
{
    char str[50];
    int length;
    cout<<"Enter any string:";
    cin>>str;
    length=string_length(str);
    cout<<"The length of the given string is:"<<length;
    cout<<endl;
return 0;
}