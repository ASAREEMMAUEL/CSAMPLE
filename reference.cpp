#include<iostream>
using namespace std;
int main()
{
    int val = 1024;
    int &reFVal = val;
    cout << "ival  = " << val <<" ," <<" reFVal =" <<reFVal <<endl;
    reFVal = 1000;
    cout << "ival  = " << val <<" ," <<" reFVal =" <<reFVal <<endl;
}