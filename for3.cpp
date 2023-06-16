#include <iostream>
using namespace std;
int main()
{
    cout << "enter the range of numbers to add up to" <<endl;
    int value = 0, sum = 0;
    while (cin >> value )
        sum += value;
    cout << "sum = " << sum <<endl;
    return 0;
}


