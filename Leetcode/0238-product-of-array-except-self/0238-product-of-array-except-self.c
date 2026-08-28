/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int n=numsSize,i;
    int *prefix=(int*)malloc(n*sizeof(int));
    int *suffix=(int*)malloc(n*sizeof(int));
    int *result=(int*)malloc(n*sizeof(int));
    prefix[0]=1;
    suffix[n-1]=1;
    for(i=1;i<n;i++)
        prefix[i]=prefix[i-1]*nums[i-1];
    for(i=n-2;i>=0;i--)
        suffix[i]=suffix[i+1]*nums[i+1];
    for(i=0;i<n;i++)
        result[i]=prefix[i]*suffix[i];
    free(prefix);
    free(suffix);
    *returnSize=n;
    return result;
}