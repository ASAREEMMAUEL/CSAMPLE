#include <iostream>
using namespace std;
int main()
{
    cout << "Enter preferred number to be added up to ";
    int  sum = 0, val;
    cin >> val;
    for ( int count = 1; count <= val; )
    {
        sum += count;
        count = count + 1;
    }
    cout << "the number  1 up to  "<< val <<
     " is " << sum <<endl;
    return 0;
}
