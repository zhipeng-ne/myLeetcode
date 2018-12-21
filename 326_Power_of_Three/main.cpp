#include <iostream>

using namespace std;
bool isPowerOfThree(int n)
{
        if (n == 0)
                return false;
        while (n % 3 == 0)
                n /= 3;
        return n == 1;
}
bool isPowerOfThree2(int n)
{
        if (n <= 0)
                return false;
        int all[20] = {1, 3, 9, 27, 81, 243, 729, 2187, 6561, 19683,
        59049, 177147, 531441, 1594323, 4782969, 14348907, 43046721,
         129140163, 387420489, 1162261467};
        int left = 0, right = 19;
        while (left <= right)
        {
                int middle = left + ((right - left) >> 1);
                if (n > all[middle]) left = middle + 1;
                else if (n < all[middle]) right = middle - 1;
                else return true;
        }
        return false;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
