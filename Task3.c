int* transformArray(int* nums, int numsSize, int* returnSize) {
    int *result = (int*)malloc(numsSize*sizeof(int));
    int i, j;
    for(i=0; i<numsSize; i++){
        if(nums[i]%2)   result[i] = 1;
        else    result[i] = 0;
    }
     for (i = 0; i < numsSize - 1; i++) {
        for (j = 0; j < numsSize - i - 1; j++) {
            if (result[j] > result[j + 1]) {
                int temp = result[j];
                result[j] = result[j + 1];
                result[j + 1] = temp;
            }
        }
    }

    *returnSize = numsSize;
    return result;
}
