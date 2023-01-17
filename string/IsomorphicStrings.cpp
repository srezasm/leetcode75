#include "../leetcode.h"

class Solution {
   public:
    bool isIsomorphic(const string& s, const string& t) {
        if (s.length() != t.length()) {
            return false;
        }

        int map1[256] = {0};
        int map2[256] = {0};
        for (int i = 0; i < s.length(); i++) {
            if (map1[s[i]] != map2[t[i]]) {
                return false;
            }
            map1[s[i]] = i + 1;
            map2[t[i]] = i + 1;
        }
        return true;
    }
};

int main(int argc, char const* argv[]) {
    printf("%d\n", Solution().isIsomorphic("egg", "add"));
    printf("%d\n", Solution().isIsomorphic("foo", "bar"));
    printf("%d\n", Solution().isIsomorphic("paper", "title"));
    printf("%d\n", Solution().isIsomorphic("est", "lal"));
    return 0;
}