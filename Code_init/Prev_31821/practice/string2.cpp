#include <iostream>
//#include <cstdio>

using namespace std;

int main()
{
    char str[10];
    gets(str);
    cout << "You entered: " << str<<endl;
    int i=0;
    for(;str[i]!='\0';i++){}
    cout<<"length of string is : "<<i;
    return 0;
}
