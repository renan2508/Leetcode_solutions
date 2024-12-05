#include <stdio.h>
#include <string.h>

int scoreOfString(char* s) {
    const int size = strlen(s);
    int sum = 0;

    if(size == 1){
        const int num = s[0];
        return num;
    }
    if(size == 0){
        return 0;
    }

    for(int i = 0;i<size-1;i++){
        int temp;
        temp = s[i] - s[i+1];
        if(temp < 0){
            temp = -temp;
        }
        sum += temp;
    }
    return sum;
}

int main(){

    char s[255] = "hello";

    printf("%d", scoreOfString(s));

    return 0;
}