int searchInsert(int* nums, int numsSize, int target) {
    
    for(int i = 0;i<numsSize;i++){
        if(nums[i] == target){
            return i;
        }
    }
    int i = 0;
    while(i < numsSize && nums[i] < target){
        i++;
    }
    return i;

}