#include<iostream>
using namespace std;

int main()
{
    int a,b,temp;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    temp = a;
    a = b;
    b = temp;
    // Number after swap
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    return 0;
}