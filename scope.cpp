#include<iostream>
using namespace std;
int another_func();
int main()
{
    int sum = 0;
    for ( int val = 1; val <= 10; ++val )
    {
        sum = sum + val;
    }
    cout << " sum of 1 to 0 inclusive is " << sum <<endl;
    another_func();
    return 0;
}
int another_func()
{
    cout << " this is another function outside main ";
    return 0;
}