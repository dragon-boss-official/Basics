#include<iostream>
using namespace std;

int main()
{
    int p,r,t,SI;
    cout<<"Enter principal amount: ";
    cin>>p;
    cout<<"Enter rate of interest: ";
    cin>>r;
    cout<<"Enter time: ";
    cin>>t;
    SI = (p*r*t)/100;
    cout<<"simple interest = "<<SI<<endl;
    return 0;
}