#include "../leetcode.h"

class Solution {
   public:
    int maxProfit(vector<int> prices) {
        int least = INT_MAX;
        int profit = 0;

        for (int i = 0; i < prices.size(); i++) {
            least = min(least, prices[i]);
            profit = max(prices[i] - least, profit);
        }

        return profit;
    }
};

int main(int argc, char const* argv[]) {
    Solution s;
    assert(s.maxProfit({7, 6, 4, 3, 1}) == 0);
    assert(s.maxProfit({7, 1, 5, 3, 6, 4}) == 5);
    return 0;
}
