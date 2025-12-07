# BST Vertical Order Printing — Explanation

## 1. Problem Restatement

Given a binary search tree (BST), print its nodes in **vertical order**, grouping
them by their horizontal distance (column index) from the root, outputting columns
from leftmost to rightmost.

Example Tree:

        4
      /   \
     2     6
    / \   / \
   1   3 5   7

Expected Output:

[ [1], [2], [4,3,5], [6], [7] ]

---

## 2. Key Insight

Vertical order traversal assigns each node a **column index**:

- Root → column = 0  
- Left child → column - 1  
- Right child → column + 1  

Nodes sharing the same column belong to the same output group.

---

## 3. Why BFS Works Best

BFS preserves *top-to-bottom* ordering within each column.  
We traverse with:

queue<pair<TreeNode*, int>>   // node + column

Each pop operation allows us to insert node values into the correct column bucket.

---

## 4. Data Structure Choice

### ✔ Option A — `map<int, vector<int>>`
Best for clarity — columns remain ordered automatically.

### ✔ Option B — Linked List Array (follow-up solution)
Used when `map` is not allowed.

Steps:

1. BFS #1 — find minCol and maxCol  
2. Create an array of linked lists of size `(maxCol - minCol + 1)`  
3. Use index = col - minCol to store nodes  

Efficient and avoids dynamic key structures.

---

## 5. Algorithm (BFS + Ordered Map)

1. Initialize BFS with `(root, 0)`  
2. Pop nodes and append values to `cols[col]`  
3. Push children with updated column indices  
4. After BFS, iterate columns from smallest to largest  

Time Complexity: **O(n)**  
Space Complexity: **O(n)**

---

## 6. Correct C++ Implementation

```cpp
vector<vector<int>> verticalOrder(TreeNode* root) {
    if (!root) return {};

    map<int, vector<int>> cols;
    queue<pair<TreeNode*, int>> q;

    q.push({root, 0});

    while (!q.empty()) {
        auto [node, col] = q.front();
        q.pop();

        cols[col].push_back(node->val);

        if (node->left) q.push({node->left, col - 1});
        if (node->right) q.push({node->right, col + 1});
    }

    vector<vector<int>> result;
    for (auto &p : cols) {
        result.push_back(p.second);
    }
    return result;
}
```

---

## 7. Mistakes Made During the Interview (Self-Review)

- Attempted DFS first, which complicates ordering  
- Misused map in the initial attempt  
- Forgot column tracking logic  
- Base cases were incomplete  

---

## 8. How to Improve

- Practice BFS problems with "position" tracking  
- Review tree traversal patterns (DFS vs BFS use cases)  
- Strengthen knowledge of `map`, `unordered_map`, and when ordering matters  

---

## 9. Summary

The key to this problem is recognizing the need to:

1. Track column indices  
2. Use BFS for proper ordering  
3. Choose the right data structure to store columns  

This approach ensures a clean, correct, and scalable solution.
