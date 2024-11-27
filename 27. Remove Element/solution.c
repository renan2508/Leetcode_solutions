int removeElement(int* nums, int numsSize, int val) {
    int unique_elements =0;
    for(int i =0;i<numsSize;i++){
        if(nums[i] != val){
            nums[unique_elements] = nums[i];
            unique_elements++;
        }
    }
    return unique_elements;
}