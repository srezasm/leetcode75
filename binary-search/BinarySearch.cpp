#include "../leetcode.h"

class Solution {
   public:
    int search(vector<int>& nums, int target) {
        short int end = nums.size() - 1;
        short int start = 0;
        short int middle;

        while (end >= start) {
            middle = (start + end) / 2;
            if (nums[middle] == target)
                return middle;
            else if (target < nums[middle]) {
                end = middle - 1;
            } else {
                start = middle + 1;
            }
        }

        return -1;
    }
};

int main(int argc, char const* argv[]) {
    Solution s;
    vector<int> nums;

    // nums = {-1, 0, 3, 5, 9, 12};
    // assert(s.search(nums, 9) == 4);

    // nums = {-1, 0, 3, 5, 9, 12};
    // assert(s.search(nums, 2) == -1);

    nums = {5};
    assert(s.search(nums, 5) == 0);
    return 0;
}
