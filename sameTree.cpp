// 12/13/22 Zoom (BA/SB)
/*
Notes: Recursion = need base case + move towards base case + call function again
Instead of exiting during recursion, try to change the state of a stored variable then check it at end
Reminder to do TDD developemnt
Pass by reference
*/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        int num = 0;
        isSameTreeHelper(p, q, &num);
        return (num == 0);
    }

    void isSameTreeHelper(TreeNode* p, TreeNode* q, int *num) {
        if (p == nullptr && q == nullptr) {
            return; // both null (end thread)
        } else if (p == nullptr || q == nullptr) {
            (*num)++;
            return; // only one null (return false)
        }
        if (p->val != q->val) {
            (*num)++;
            return; // different values (return false)
        } else {
            isSameTreeHelper(p->left, q->left, num);
            isSameTreeHelper(p->right, q->right, num);
        }
        return;
    }
};