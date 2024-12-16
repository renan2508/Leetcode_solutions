#include <stdio.h>
#include <stdbool.h>

bool containsDuplicate(int* nums, int numsSize) {
    //bubble sort lmao

    for(int i = 0;i<numsSize;i++){
        for(int j = 0;j<numsSize - i - 1;j++){
            if(nums[j] > nums[j+1]){
                int temp = nums[j];
                nums[j] = nums[j+1];
                nums[j+1] = temp;
            }
        }
    }

    int current_number_position = 0;

    for(int i = current_number_position+1;i<numsSize;i++){
        
        if(nums[i] != nums[current_number_position]){
            current_number_position++;
        } else{
            return true;
        }
    }
    return false;
    
   
}




int main(){

    int nums[] = {170,-368,148,672,397,-629,-788,192,170,309,-615,-237};
    int numsSize = sizeof(nums) / sizeof(nums[0]);

    if(containsDuplicate(nums, numsSize)){
        printf("Duplicates.");
    } else{
        printf("No duplicates.");
    }

    return 0;   
}