#include <iostream>
using namespace std;
int main()
{
    int num = 0;
    cout << "enter your value." <<endl;
    cin >> num;
    if ( num > 10)
    { cout << "the number entered is greater than 10. ";}
    else if (num < 10)
    {cout << "the number entered is less than 10.";}
    else 
    {cout << "the number entered is equal to 10."; }
}