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