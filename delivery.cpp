#include <iostream>
using namespace std;
int main()
{
    int n1 = 0;
    cout << "enter " <<endl;
    cout << "1 - for tea" <<endl;
    cout << "2 - for coffee " <<endl;
    cin >> n1;
    if ( n1 == 1)
    { cout << " your tea is on the way. Thank you ";}
    else if ( n1 == 2 )
    { cout << " your coffee is on the way. Thank you ";}
    else { cout << " sorry , you have entered a wrong option";}
    return 0;
} 