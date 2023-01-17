#include "../leetcode.h"

class Solution {
   public:
    bool isSubsequence(string s, string t) {
        int j = 0;
        bool flag;
        for (int i = 0; i < s.length(); i++) {
            flag = false;
            while (j < t.length()) {
                if (s[i] == t[j]) {
                    j++;
                    flag = true;
                    break;
                }
                j++;
            }
            if (!flag)
                return false;
        }
        return true;
    }
};

int main(int argc, char const* argv[]) {
    cout << Solution().isSubsequence("abc", "ahbgdc");
    cout << Solution().isSubsequence("axc", "ahbgdc");
    cout << Solution().isSubsequence("aaa", "baa");

    return 0;
}
