#include <iostream>
#include <vector>
using namespace std;
class NumMatrix
{
public:
        int **sum;
        NumMatrix(vector<vector<int>> matrix)
        {
                *sum = new

        }

        int sumRegion(int row1, int col1, int row2, int col2)
        {
                return sum[row2+1][col2+1]-sum[][]-sum[][]+sum[][];
        }
};
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
