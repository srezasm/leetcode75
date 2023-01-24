#include "../leetcode.h"

class Solution {
   public:
    unordered_map<int, int> commonMap;

    int fib(int n) {
        if (n == 1)
            return 1;
        if (n == 0)
            return 0;
        if (commonMap[n])
            return commonMap[n];

        int ans = fib(n - 1) + fib(n - 2);
        commonMap[n] = ans;
        return ans;
    }
};

int main(int argc, char const* argv[]) {
    return 0;
}
