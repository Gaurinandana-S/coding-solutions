# Move Zeroes

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Given an integer array `nums`, move all `0`'s to the end of it while maintaining the relative order of the non-zero elements.

 **Note**  that you must do this in-place without making a copy of the array.

 

 **Example 1:** 

```
Input: nums = [0,1,0,3,12]
Output: [1,3,12,0,0]

```

 **Example 2:** 

```
Input: nums = [0]
Output: [0]

```

 

 **Constraints:** 

- 1 <= nums.length <= 104
- -231 <= nums[i] <= 231 - 1

 

 **Follow up:**  Could you minimize the total number of operations done?

## Solution

**Language:** Python  
**Runtime:** 2809 ms (beats 5.01%)  
**Memory:** 20.5 MB (beats 24.89%)  
**Submitted:** 2026-08-28T11:52:44.421Z  

```py
class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        # Loop backwards from the last element down to 0
        for i in range(len(nums) - 1, -1, -1):
            if nums[i] == 0:
                # Your inner loop: shift everything left
                for j in range(i, len(nums) - 1):
                    nums[j] = nums[j + 1]
                
                # Place the zero at the very end
                nums[-1] = 0
```

---

[View on LeetCode](https://leetcode.com/problems/move-zeroes/)