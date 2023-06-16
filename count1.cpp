#include <iostream> 
 using namespace std;
 int main()
 {
    int n1 = 0, n2 = 0;
    if (cin >> n1 )
    {
        int cnt = 1;
        while ( cin >> n2)
        {if ( n1 == n2)
        ++cnt;
        else {
            cout << n1 << "occurs " << cnt << " times." <<endl;
            n1 = n2;
            cnt = 1;
        }
        }
        cout << n1 << "occurs " << cnt << " times." <<endl;
    }
    return 0;
 }