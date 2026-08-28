void moveZeroes(int* nums, int numsSize) {
    int i,j,k,temp;
    k=numsSize-1;
    for(i=0;i<=k;i++){
        if(nums[i]==0){
            temp=nums[i];
            for(j=i;j<k;j++){
                nums[j]=nums[j+1];
            }
            nums[k]=temp;
            k--;
            i--;
        }
    }
}