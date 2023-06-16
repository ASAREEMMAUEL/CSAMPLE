#include <iostream>
using namespace std;
int main()
{
    cout << " enter your number" <<endl;
    int num = 0;
    cin >> num;
    if ( num > 10)
    { cout << "the number " << num << "is greater than 10.";}
    else 
    { cout << "the number is less than 10.";
    }
    return 0;
}