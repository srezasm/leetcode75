#include "../leetcode.h"

bool isBadVersion(int version) {
}

class Solution {
   public:
    int firstBadVersion(int n) {
        // long start = 1;
        // long mid;
        // while (true) {
        //     mid = (start + n) / 2;
        //     if (isBadVersion(mid)) {
        //         mid = (start + mid - 1) / 2;
        //         while (isBadVersion(mid)) {
        //             mid = (start + mid - 1) / 2;
        //         }
        //         while (!isBadVersion(mid))
        //             mid++;
        //         return mid;
        //     } else {
        //         start = mid + 1;
        //     }
        // }
        // return 1;

        int start = 1;
        int mid;

        while(start < n) {
            mid = start + (n - start) / 2;

            if(!isBadVersion(mid))
                start = mid + 1;
            else
                n = mid;
        }

        return start;
    }
};

int main(int argc, char const* argv[]) {
    return 0;
}
