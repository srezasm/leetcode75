#include "../leetcode.h"

class Solution {
   public:
    int longestPalindrome(string s) {
        unordered_map<char, int> accuranceCount;
        int result = 0;
        int len = s.length();

        if (len < 2)
            return len;

        for (int i = 0; i < len; i++) {
            accuranceCount[s[i]]++;
        }

        for (auto c : accuranceCount) {
            if (c.second % 2 == 0)
                result += c.second;
            else if (c.second > 2)
                result += --c.second;
        }

        for (auto c : accuranceCount) {
            if (c.second % 2 == 1) {
                result++;
                break;
            }
        }

        return result;
    }
};

int main(int argc, char const* argv[]) {
    Solution s;
    assert(s.longestPalindrome("abccccdd") == 7);   // dccbccd
    assert(s.longestPalindrome("aaabbbcco") == 7);  // cabobac
    assert(s.longestPalindrome("a") == 1);          // a
    return 0;
}
