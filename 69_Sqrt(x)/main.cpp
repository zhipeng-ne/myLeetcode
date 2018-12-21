#include <iostream>
#include <cmath>
using namespace std;
int mySqrt(int x)
{
        double k = 1.0;
        while (abs((k * k - x)) > 1e-6)
        {
                k = (k + x / k) / 2;
        }
        return (int)k;
}
double mySqrt1(double x)
{
        double left = 0, right = x;
        double mid = left + (right-left ) / 2;
        while (abs(mid * mid - x) > 1e-6)
        {
                if (mid  > x / mid)
                {
                        right = mid;
                }
                else
                {
                        left = mid;
                }
                mid = left + (right-left ) / 2;
        }
        return mid;
}
int mySqrt2(int x)
{
        int64_t l = 0;
        int64_t r = int64_t(x) + 1;
        while (l < r)
        {
                auto m = (l + r) / 2;
                if (m * m <= x) l = m + 1;
                else r = m;
        }
        return l - 1;
}
int main()
{
        cout << mySqrt1(5.0) << endl;
        return 0;
}
