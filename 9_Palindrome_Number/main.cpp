#include <iostream>

using namespace std;
bool isPalindrome(int x)
{
        if(x<0)
                return false;
        int  tmp = x;
        long  num=0;
        while(x>0)
        {
                num=num*10+x%10;
                x/=10;
        }
        return num==tmp;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
