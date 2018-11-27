#include <iostream>

using namespace std;
int climbStairs(int n)
{
        if(n<=2)
                return n;
        int first = 1;
        int second= 2;
        int ways=0;
        for(int i=3;i<=n;i++)
        {
               ways=first+second;
               first = second;
               second = ways;
        }
        return ways;
}
int main()
{
        cout << climbStairs(4) << endl;
        return 0;
}
