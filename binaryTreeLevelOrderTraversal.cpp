// 12/14/22 Zoom (BA/SB)
/*
Notes:  Implemented BFS using queue of pairs. Used pairs to track level on tree in order to store in proper vector
        Used Vector Resize to cut extra vectors at end of iteration 
         
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
 #include <queue>
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> vec(2000);
        int numLevels;
        queue<pair<TreeNode*,int>> q;          //queue of pairs
        q.push({root,0});                       //push root

        while(!q.empty()){
            if (q.front().first!=nullptr){
                vec[q.front().second].push_back(q.front().first->val);  //adding node to appropriate level in vector
                q.push({q.front().first->left,(q.front().second + 1)});     //add left child pair
                q.push({q.front().first->right,(q.front().second + 1)});    //add right child pair 
            }
            numLevels = q.front().second;           //keep updating numLevels to nodes
            q.pop();
        }
        vec.resize(numLevels);                              //removing all empty vectors after iterating through tree 
        return vec;
    }
};

//Runtime: O(n + m) because iterate through all nodes and edges once 