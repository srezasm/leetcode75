#include "../leetcode.h"

class Solution {
   public:
    // ** Memoized recursive **
    // unordered_map<int, int> memo;
    // int climbStairs(int n) {
    //     if (n == 0)
    //         return 1;
    //     if (n == -1)
    //         return 0;

    //     if (memo[n])
    //         return memo[n];

    //     int ans = climbStairs(n - 1) + climbStairs(n - 2);
    //     memo[n] = ans;
    //     return ans;
    // }

    // ** Normal (array) **
    // int climbStairs(int n) {
    //     vector<int> steps = {1, 1};

    //     if (n < 2)
    //         return steps[n];

    //     for (int i = 2; i <= n; i++)
    //         steps.push_back(steps[i - 1] + steps[i - 2]);

    //     return steps[n];
    // }

    // ** Normal **
    int climbStairs(int n) {
        int step1 = 1;
        int step2 = 1;
        int result = 0;

        if (n < 2)
            return 1;

        for (int i = 2; i <= n; i++) {
            result = step1 + step2;
            step1 = step2;
            step2 = result;
        }

        return result;
    }
};

int main(int argc, char const* argv[]) {
    return 0;
}
