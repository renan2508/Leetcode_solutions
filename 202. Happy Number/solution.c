#include <stdio.h>
#include <stdbool.h>

bool isHappy(int n) {
    int sum = 0;

    if(n == 1 || n == 7){
        return true;
    }

    while(n >= 10){
        sum = 0;
        while(n > 0){
            int digit = n % 10;
            sum += (digit * digit);
            n /= 10;
        }

        n = sum;
    }
    if(sum == 1 || sum == 7){
        return true;
    }
    return false;
}

int main(){
    int n = 15;
    if(isHappy(n)){
        printf("He's happy.");
    } else{
        printf("He's not happy.");
    }
}