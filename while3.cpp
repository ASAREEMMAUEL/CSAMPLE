#include <iostream>
using namespace std;
int main()
{ cout << " pls enter your values " <<endl;
    int sum =0;
    for ( int tt = 1; cin >> tt; tt ++ )
    {
        sum += tt;
    }
    cout << " pls the sum of  these numbers is " << sum <<endl;
    return 0;
}

