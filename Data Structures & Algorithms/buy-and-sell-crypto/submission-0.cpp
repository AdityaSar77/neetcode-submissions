class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int max_profit = 0;
        for (int sell = 1; sell < prices.size(); sell++) {
            if (prices[buy] >= prices[sell]) buy = sell;
            else {
                int profit = prices[sell] - prices[buy];
                max_profit = (profit >= max_profit) ? profit : max_profit;
            }
        }
        return max_profit;
    }
};
