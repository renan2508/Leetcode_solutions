int removeDuplicates(int *nums, int numsSize) {
    int unique_elements = 1;
    for(int i = 1;i<numsSize;i++){
        if(nums[i] != nums[unique_elements-1]){
            nums[unique_elements] = nums[i];
            unique_elements++;
        }
    }
    return unique_elements;
}