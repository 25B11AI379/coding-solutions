/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int S, int t, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for (int i = 0; i < S; i++) {
        for (int j = i + 1; j < S; j++) {
            if (nums[i] + nums[j] == t) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }   
    }
    free(result);
    return NULL;
}