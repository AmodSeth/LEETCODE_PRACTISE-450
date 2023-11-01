class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> counter;
        queue<TreeNode*> queue;
        queue.push(root);
        //traverses the whole tree
        while (!queue.empty()) {
            TreeNode* node = queue.front();
            queue.pop();

            counter[node->val]++;
            if (node->left != nullptr) {
                queue.push(node->left);
            }
            if (node->right != nullptr) {
                queue.push(node->right);
            }
        }
        //make a map of it
        int maxFreq = 0;
        for (auto& [key, val] : counter) {
            maxFreq = max(maxFreq, val);
        }
        
        vector<int> ans;
        for (auto& [key, val] : counter) {
            if (val == maxFreq) {
                ans.push_back(key);
            } 
        }
        
        return ans;
    }
};