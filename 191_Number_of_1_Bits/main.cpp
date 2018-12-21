#include <iostream>

using namespace std;
int hammingWeight(uint32_t n)
{
        int time = 0;
        for (int i = 0; i < 32; ++i)
        {
                if (n & 1 == 1)
                        ++time;
                n = n >> 1;
        }
        return time;
}
int hammingWeight1(uint32_t n)
{
        int ans = 0;
        for (int i = 0; i < 32; i++)
        {
                if (n & (1 << i))
                {
                        ans++;
                }
        }
        return ans;

}
int hammingWeight2(uint32_t n)
{
        bitset<32> b(n);
        return b.count();
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
