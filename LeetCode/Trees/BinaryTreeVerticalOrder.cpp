class Solution {
    public:
        vector<vector<int>> verticalOrder(TreeNode* root) {
            if(!root) return {};
            map<int, vector<int>> colTable;
            queue<pair<TreeNode*, int>> q;
            q.push({root, 0});
            while(!q.empty()){
                auto [node, col] = q.front; q.pop;
                colTable[col].push_back(node->val);
                if(node->left) q.push({node->left, col-1});
                if(node->right) q.push({node->right, col+1});
            }
            vector<vector<int>> result;
            for(auto& [col, nodes] : colTable){
                result.pushback(nodes);
            }
        }};