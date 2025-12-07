# Notes — BST Vertical Order Traversal

## 1. Key Concepts

### Column Index Rules
- Root column = 0  
- Left child = column - 1  
- Right child = column + 1  

Nodes belonging to the same column will be grouped together in the final output.

---

## 2. Why Use BFS Instead of DFS?

BFS processes nodes level-by-level (top → bottom).  
This naturally preserves vertical ordering when nodes share the same column.

Data structure used:

```
queue<pair<TreeNode*, int>>
```

Each entry stores:
- the current node
- its computed column index

---

## 3. Data Structure for Column Storage

We use:

```
map<int, vector<int>>
```

Reasons:
- keys stay ordered automatically (leftmost → rightmost)
- easy to iterate in correct output order

---

## 4. Algorithm Outline

1. Start BFS at `(root, 0)`
2. Pop node, add value to `cols[col]`
3. Push children using `col - 1` and `col + 1`
4. After BFS, iterate `cols` from smallest to largest key

Time Complexity: **O(n)**  
Space Complexity: **O(n)**

---

## 5. Follow-up Knowledge

### If map is not allowed:
- First BFS discovers minCol and maxCol
- Allocate array of linked lists of size `(maxCol - minCol + 1)`
- Use offset indexing: `index = col - minCol`

This avoids dynamic key structures while keeping ordering intact.
