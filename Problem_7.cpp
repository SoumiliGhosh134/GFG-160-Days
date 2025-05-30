/*
 * Name: Soumili Ghosh
 * Github: SoumiliGhosh134
 * Linkedln: https://www.linkedin.com/in/soumili-ghosh-504a75313/
 */
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        
        int profit = 0;
        for (int i= 1; i < prices.size(); i++) {
            // If today's price is higher than yesterday's add the difference
            if (prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }
        
        return profit;
    }
};
