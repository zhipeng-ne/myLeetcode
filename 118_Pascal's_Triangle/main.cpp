#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> generate(int numRows)
{
        if(numRows==0)
                return vector<vector<int>> {};
        vector<vector<int>> triangle={{1}};
        for(int i=2;i<=numRows;i++)
        {
                vector<int> nums(i);
                nums[0]=1,nums[i-1]=1;
                for(int j=1;j<i-1;j++)
                {
                        nums[j]=triangle[i-2][j-1]+triangle[i-2][j];
                }
                triangle.push_back(nums);
        }
        return triangle;
}
int main()
{
        cout << "Hello world!" << endl;
        return 0;
}
