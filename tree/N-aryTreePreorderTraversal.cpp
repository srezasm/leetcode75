#include "../leetcode.h"

// Runtime: 18 ms
// Memory:  11.5 MB
class Solution {
   public:
    vector<int> answer;
    
    void fillAnswer(Node* root) {
        if(root == nullptr)
            return;

        answer.push_back(root->val);

        for(auto child: root->children) {
            fillAnswer(child);
        }
    }

    vector<int> preorder(Node* root) {
        fillAnswer(root);
        return answer;
    }
};

// Runtime: 32 ms
// Memory:  14.3 MB
// class Solution {
//    public:
//     vector<int> preorder(Node* root) {
//         if(root == nullptr)
//             return {};
//         if (root->children.size() == 0) {
//             return {root->val};
//         }

//         vector<int> result;
//         result.push_back(root->val);
//         for (auto child : root->children) {
//             auto childResult = preorder(child);
//             result.insert(end(result), begin(childResult), end(childResult));
//         }

//         return result;
//     }
// };

int main(int argc, char const* argv[]) {
    Solution s;
    // Node x = NULL;
    // s.preorder(&x);
    return 0;
}
