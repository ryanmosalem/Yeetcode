// 10/28/22 Eng II
/*
Notes: Recurssion = need base case + move towards base case + call function again
Binary tree = any tree but at most two children 
Inorder traversal: visually - left -> right 
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
    vector<int> solution; 
    
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalHelper(root);
        return solution; 
    }
    
    //Helper Function
    void inorderTraversalHelper(TreeNode* root){
        if (root == nullptr)
            return;
        inorderTraversalHelper(root->left);
       //std::cout << root->val <<endl;
        solution.push_back(root->val);
        inorderTraversalHelper(root->right);   
    }
};