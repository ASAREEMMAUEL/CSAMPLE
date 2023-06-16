#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    cout << "please  what do you need for your breakfast" <<endl;
    cout << "enter " <<endl;
    cout << "1) -for tea" <<endl;
    cout << "2) -for coffee " <<endl;
    cin >> n1;
    if ( n1 = 1 )
    {
        cout << " thanks for choosing 1, your tea is on the way. " <<endl;
    }
    else if ( n1 = 2)
    {
        cout << " thanks for choosing 2, your coffee is on the way. " <<endl;
    }
    else
    {
        cout << " please you entered a wrong value " <<endl;
    }
    return 0;
}
