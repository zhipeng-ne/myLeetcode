#include <iostream>
#include <vector>
using namespace std;
void rotate(vector<vector<int>>& matrix)
{
        int len  = matrix.size();
        for(int i=0;i<len;++i)
        {
                for(int j=0;j<len/2;++j)
                {
                        swap(matrix[i][j],matrix[i][len-1-j]);
                }
        }
        for(int i=0;i<len;++i)
        {
                for(int j=0;j<len-i;j++)
                {
                        swap(matrix[i][j],matrix[len-1-j][len-1-i]);
                }
        }

}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
