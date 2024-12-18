#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    *returnSize = candiesSize;
    bool* result = malloc((*returnSize) * sizeof(bool)); 
    int max = candies[0];

    for(int i = 0;i<candiesSize;i++){
        if(max < candies[i]){
            max = candies[i];
        }
    }

    for(int i = 0;i<candiesSize;i++){
        if((candies[i] + extraCandies) >= max){
            result[i] = true;
        } else{
            result[i] = false;
        }
    }
    return result;
}

int main(){

    int candies[] = {4,2,1,1,2};
    int candiesSize = sizeof(candies) / sizeof(candies[0]);
    int returnSize = candiesSize;
    int extraCandies = 1;

    bool* arr = kidsWithCandies(candies, candiesSize, extraCandies, &returnSize);

    for(int i = 0;i<candiesSize;i++){
        if(arr[i] == true){
            printf("true, ");
        } else{
            printf("false, ");
        }
    }

    free(arr);

    return 0;
}