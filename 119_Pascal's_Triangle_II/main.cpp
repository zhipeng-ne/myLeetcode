#include <iostream>
#include <vector>
using namespace std;
vector<int> getRow(int rowIndex)
{
        if (rowIndex == 0)
                return vector<int> {1};
        if (rowIndex == 1)
                return vector<int> {1, 1};
        vector<int> result = {1, 1};
        for (int i = 2 ; i <= rowIndex; ++i)
        {
                vector<int> tmp;
                tmp.resize(i + 1);
                tmp[0] = 1;
                tmp[i] = 1;
                for (int j = 1; j < tmp.size() - 1; ++j)
                {
                        tmp[j] = result[j - 1] + result[j];
                }
                result = tmp;
        }
        return result;
}
vector<int> getRow1(int rowIndex)
{
        vector<int> row, nextRow;
        for (int i = 0; i <= rowIndex; ++i)
        {
                nextRow.resize(i + 1);
                nextRow[0] = nextRow[i] = 1;
                for (int j = 1; j < i; ++j)
                        nextRow[j] = row[j - 1] + row[j];
                row = nextRow;
        }
        return row;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
