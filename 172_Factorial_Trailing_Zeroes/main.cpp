#include <iostream>

using namespace std;
int trailingZeroes(int n)
{
        int res = 0;
        for (; n > 0; n /= 5)
        {
                res += n / 5;
        }
        return res;
}
int main()
{
        cout << trailingZeroes(13) << endl;
        return 0;
}
