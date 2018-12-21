#include <iostream>
#include <unordered_set>
#include <cmath>
using namespace std;
bool isHappy(int n)
{
        if(n==1)
                return true;
        unordered_set<int> numSet;
        numSet.insert(n);
        int first=0;
        while(n!=1)
        {
                first =0;
                while(n!=0)
                {
                        first +=pow(n%10,2);
                        n/=10;
                }
                if(first==1)
                        return true;
                if(numSet.find(first)!=numSet.end())
                        break;
                else
                        numSet.insert(first);
                n=first;
        }
        return false;
}
int main()
{
        cout << isHappy(19)<< endl;
        return 0;
}
