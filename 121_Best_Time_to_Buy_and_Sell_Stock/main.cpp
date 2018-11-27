#include <iostream>
#include <vector>

using namespace std;
int maxProfit(vector<int>& prices)
{
        if(prices.size()==0)
                return 0;
        int buyPrice=prices[0];
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
                if(prices[i]-buyPrice>profit)
                        profit=prices[i]-buyPrice;
                if(prices[i]<buyPrice)
                        buyPrice=prices[i];
        }
        return profit;
}
int main()
{
        //;vector<int> nums={7,1,5,3,6,4};
        vector<int> nums={7,6,4,3,1};
        cout << maxProfit(nums) << endl;
        return 0;
}
