#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int addDigits(int num) {
    
    int sum = 0;

    if(num < 10){
        return num;
    }

    while(num >= 10){
        sum = 0;
        while(num > 0){
            int digit = num % 10;
            sum += digit;
            num = num / 10;
        }
        num = sum;
    
    }
    return sum;
}

int main(){

    int num = 10;
    printf("%d", addDigits(num));
    return 0;
}