#include "../leetcode.h"

class Solution {
   public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (root == nullptr)
            return {};

        vector<TreeNode*> queue;
        vector<vector<int>> answer;

        answer.push_back({root->val});

        if (root->left)
            queue.push_back(root->left);
        if (root->right)
            queue.push_back(root->right);

        vector<int> currentAnswer;
        while (!queue.empty()) {
            currentAnswer.erase(begin(currentAnswer), end(currentAnswer));
            int removalCout = 0;

            int queueSize = queue.size();
            for (int i = 0; i < queueSize; i++) {
                TreeNode* item = queue[i];
                if (item == nullptr)
                    continue;

                currentAnswer.push_back(item->val);

                if (item->left)
                    queue.push_back(item->left);
                if (item->right)
                    queue.push_back(item->right);

                removalCout++;
            }

            for (int i = 0; i < removalCout; i++) {
                queue.erase(begin(queue));
            }

            answer.push_back(currentAnswer);
        }

        return answer;
    }
};

int main(int argc, char const* argv[]) {
    return 0;
}
