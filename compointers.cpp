#include<iostream>
using namespace std;
int main()
{
    int ival = 50;
    int *p = &ival;
    cout << " ival = " <<ival <<endl << " p = " << p << " *p = "<< *p <<endl;
    *p = 51;
    cout << " new ival = " <<ival <<endl << " new p = " << p << " new *p = "<< *p <<endl;
    ival = 52;
    cout << " new ival = " <<ival <<endl << " new p = " << p << " new *p = "<< *p <<endl;
}