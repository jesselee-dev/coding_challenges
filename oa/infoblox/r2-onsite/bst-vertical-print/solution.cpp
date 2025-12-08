/*
Leetcode 原题
https://leetcode.com/problems/binary-tree-vertical-order-traversal/
*/

#include <vector>
#include <map>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
};

vector<vector<int>> verticalOrder(TreeNode* root) {
    if (!root) return {};

    // 这里采用queue 是因为要做 BFS 方法

    // DFS 是上下穿来穿去，不稳定的。
    // BFS 是一层一层往下走，顺序稳定。
    map<int, vector<int>> cols;               // column index -> list of nodes
    queue<pair<TreeNode*, int>> q;           // BFS queue: (node, column)

    q.push({root, 0});

    while (!q.empty()) {
        // auto 是自动推断类型 --> Complier 自己根据右边的东西，推断左边变量的类型。
        // [node, col] 是结构化绑定（structured binding）。
        auto [node, col] = q.front();
        q.pop();

        cols[col].push_back(node->val); // 这里的col 是 index

        if (node->left)  q.push({node->left, col - 1});
        if (node->right) q.push({node->right, col + 1});
    }

    vector<vector<int>> result;
    for (auto &p : cols) {
        result.push_back(p.second);
    }
    return result;
}

/*

最优解：节省了map 的insert 时间O(n log(n))
但是需要维持两个variables: minCol & maxCol

class Solution {
public:
    vector<vector<int>> verticalOrder(TreeNode* root) {
        if (!root) return {};

        unordered_map<int, vector<int>> cols;  
        queue<pair<TreeNode*, int>> q;

        int minCol = 0, maxCol = 0;

        q.push({root, 0});

        while (!q.empty()) {
            auto [node, col] = q.front();
            q.pop();

            cols[col].push_back(node->val); 

            minCol = min(minCol, col);
            maxCol = max(maxCol, col);

            if (node->left)
                q.push({node->left, col - 1});
            if (node->right)
                q.push({node->right, col + 1});
        }

        vector<vector<int>> result;
        for (int c = minCol; c <= maxCol; c++) {
            result.push_back(cols[c]);
        }
        return result;
    }
};
*/