#include <iostream>
#include <vector>
using namespace std;
int maxProfit(vector<int>& prices)
{
        if(prices==nullptr)
                return 0;
        int profit =0;
        for(int i=0;i<prices.size()-1;i++)
        {
                if(prices[i]<prices[i+1])
                        profit+=prices[i+1]-prices[i];
        }
        return profit;
}
int main()
{
        vector<int> nums = {1,2,3,4,5};
        cout << maxProfit(nums) << endl;
        return 0;
}
