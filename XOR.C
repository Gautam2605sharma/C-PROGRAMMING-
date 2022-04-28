#include<iostream>
using namespace std;
int main()
{
    void*p;
    int a=10;
    char ch='A';
    p=&a;
    cout<<*(int*)p;
    p=&ch;
    cout<<*p;
    return 0;
}