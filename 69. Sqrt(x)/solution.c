#include <stdio.h>

int mySqrt(int x) {
    if(x == 0 || x == 1){
        return x;
    }
    int right = x;
    int left = 0;

    while(left <= right){
        int middle = (left+right) / 2;

        if(middle < x/middle){
            left = middle+1;

        } else if(middle > x/middle){
            right = middle-1;

        }
        else{
            return middle;
        }
    }
    return right;
}

int main(){

    const int x = 1;
    printf("%d", mySqrt(x));

    return 0;
}