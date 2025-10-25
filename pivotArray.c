int* pivotArray(int* nums, int numsSize, int pivot, int* returnSize) {
    *returnSize = numsSize;
    int* result = (int*)malloc(numsSize * sizeof(int)); // Allocate memory for the result array
    if (result == NULL) {
        // Handle memory allocation failure
        *returnSize = 0;
        return NULL;
    }

    int index = 0;

    // First pass: Add elements less than the pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] < pivot) {
            result[index++] = nums[i];
        }
    }

    // Second pass: Add elements equal to the pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] == pivot) {
            result[index++] = nums[i];
        }
    }

    // Third pass: Add elements greater than the pivot
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] > pivot) {
            result[index++] = nums[i];
        }
    }

    return result;
}
