#include <iostream>
#include <vector>
using namespace std;
vector<int> sortArrayByParity(vector<int>& A)
{
        int j=-1;
        for(int i=0;i<A.size();i++)
        {
               if(A[i]%2==0)
               {
                       j++;
                       swap(A[i],A[j]);
               }
        }
        return A;
}
int main()
{

        return 0;
}
