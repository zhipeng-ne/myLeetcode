#include <iostream>
#include <vector>
using namespace std;
bool isPrimes(int num)
{

        for (int i = 2; i <= num / 2; i++)
        {
                if (num % i == 0)
                        return false;
        }
        return true;
}
int countPrimes(int n)
{
        if (n <= 2) return 0;
        vector<bool> passed(n, false);
        int sum = 1;
        int upper = sqrt(n);
        for (int i = 3; i < n; i += 2)
        {
                if (!passed[i])
                {
                        sum++;
                        //avoid overflow
                        if (i > upper) continue;
                        for (int j = i * i; j < n; j += i)
                        {
                                passed[j] = true;
                        }
                }
        }
        return sum;
}

int main()
{
        cout << countPrimes(1000) << endl;
        return 0;
}
