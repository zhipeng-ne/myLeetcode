#include <iostream>

using namespace std;
uint32_t reverseBits(uint32_t n)
{
        uint32_t res = 0;
        for (int i = 0; i < 32; i++)
        {
                res=res*2+(n&1);
                n=n>>1;
        }
        return res;
}
int main()
{
        cout << reverseBits(00000010100101000001111010011100) << endl;
        return 0;
}
