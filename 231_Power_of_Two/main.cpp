#include <iostream>

using namespace std;
bool isPowerOfTwo(int n)
{
        return n > 0 && !(n & (n - 1));
}
bool isPowerOfTwo2(int n)
{
        if (n == 0)
                return false;
        while (n % 2 == 0)
                n /= 2;
        return n == 1;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
