# Pair Sum (Two-Sum) - Optimized Two-Pointer Approach

This repository features an optimized C++ solution for the **Pair Sum** problem using the **Two-Pointer technique**. This approach is significantly faster than the brute-force method for sorted arrays.

---

## 🚀 How the Algorithm Works

Since the input array is **sorted**, we can find the target sum in a single pass:

1.  **Initialize:** Place one pointer (`i`) at the beginning (smallest element) and another (`j`) at the end (largest element).
2.  **Calculate:** Find the sum of the elements at these two pointers (`ps = arr[i] + arr[j]`).
3.  **Compare:**
    * If **`ps > target`**: The sum is too large. To decrease it, move the right pointer (`j--`) to a smaller value.
    * If **`ps < target`**: The sum is too small. To increase it, move the left pointer (`i++`) to a larger value.
    * If **`ps == target`**: You found the pair! Return the indices.
4.  **Terminate:** Continue until the pointers meet or the pair is found.

## 📊 Complexity Analysis

| Metric | Complexity | Description |
| :--- | :--- | :--- |
| **Time Complexity** | $O(n)$ | We traverse the array at most once. Each step either increments `i` or decrements `j`. |
| **Space Complexity** | $O(1)$ | No extra data structures are used regardless of the input size. |

---

## 💻 Code Overview

The logic uses a `while` loop to converge on the target:

```cpp
vector<int> pairSum(vector<int> arr, int tar) {
    int i = 0, j = arr.size() - 1;
    
    while(i < j) {
        int ps = arr[i] + arr[j]; 
        if(ps > tar) j--; 
        else if(ps < tar) i++;
        else return {i, j};
    }
    return {}; 
}

```

#  📝 Example Output
Input: arr = {2, 3, 5, 7, 9, 11}, target = 14

Output: [2,4]
