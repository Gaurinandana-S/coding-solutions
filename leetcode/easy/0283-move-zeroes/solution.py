class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
       for i in range(0,len(nums)):
        if (nums[i]==0):
            j=0
            for j in range (0,len(nums)-1):
                nums[j]=nums[j+1]
            nums[j]=nums[len(nums)-1]
            nums[len(nums)-1]=0
        
        