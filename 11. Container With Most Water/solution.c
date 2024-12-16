#include <stdio.h>

int maxArea(int* height, int heightSize) {
    
}


int main(){

    int height[] = {1,8,6,2,5,4,8,3,7};
    int heightSize = sizeof(height) / sizeof(height[0]);
    int max = maxArea(height, heightSize);

    printf("%d", max);
    return 0;
}