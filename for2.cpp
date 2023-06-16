#include <iostream>
int main()
{
    int sum = 0;
        for ( int count =1; count <= 10;)
    {
        sum += count;
        count ++;
    }
        std::cout << " the sum from one to 10 is =" << sum <<std::endl;
    return 0;
}