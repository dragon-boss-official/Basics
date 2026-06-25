#include<iostream>
using namespace std;

int main()
{
    int F,C;
    cout<<"Enter temperature in degree celsius: ";
    cin>>C;
    F = (9/5)*C + 32;
    cout<<"Tempr in farenheit: "<<F<<endl;
    return 0;
}