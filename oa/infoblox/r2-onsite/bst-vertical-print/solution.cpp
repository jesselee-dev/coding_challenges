#include <iostream>
#include <vector>
#include <map>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

vector<vector<int>> verticalOrder(TreeNode* root) {
    if (!root) return {};

    map<int, vector<int>> cols;   // column index → list of node values
    queue<pair<TreeNode*, int>> q; // node + column index

    q.push({root, 0});

    while (!q.empty()) {
        auto [node, col] = q.front();
        q.pop();

        cols[col].push_back(node->val);

        if (node->left)  q.push({node->left, col - 1});
        if (node->right) q.push({node->right, col + 1});
    }

    vector<vector<int>> result;
    for (auto &p : cols) {
        result.push_back(p.second);
    }
    return result;
}
