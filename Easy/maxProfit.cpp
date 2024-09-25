#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        unsigned int max = 0, min = 0xFFFFF;
        int minIndex=0,maxIndex=1, profit = 0;
        while(maxIndex < prices.size())
        {
            
            if(prices[maxIndex] - prices[minIndex] > profit)
            {
                profit = prices[maxIndex] - prices[minIndex];
            } else if (prices[maxIndex] - prices[minIndex] < 0)
            {
                minIndex +=1;
                if(minIndex >= maxIndex)
                {
                    maxIndex+=1;
                }
            } else {
                maxIndex+=1;
            }
            
        }
        
        
        
        return profit;

    }
};


int main()
{
    Solution sol;
    
    vector<int> v{7,1,5,3,0,6,0,4};
    cout << sol.maxProfit(v) << endl;
}