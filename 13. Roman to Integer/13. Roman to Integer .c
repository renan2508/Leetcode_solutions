#include <stdio.h>
#include <string.h>

int romanToInt(const char* s) {
    int sum = 0;

    const size_t size = strlen(s);

    int first_value;
    int second_value;
    for(size_t i =size-1;i>0;i--) {
        switch(s[i]) {
            case 'I': first_value = 1; break;
            case 'V': first_value = 5; break;
            case 'X': first_value = 10; break;
            case 'L': first_value = 50; break;
            case 'C': first_value = 100; break;
            case 'D': first_value = 500; break;
            case 'M': first_value = 1000; break;
            default: first_value = 0; break;
        }
        if(size > 1) {
            switch(s[i-1]) {
                case 'I': second_value = 1; break;
                case 'V': second_value = 5; break;
                case 'X': second_value = 10; break;
                case 'L': second_value = 50; break;
                case 'C': second_value = 100; break;
                case 'D': second_value = 500; break;
                case 'M': second_value = 1000; break;
                default: second_value = 0; break;
            }
            printf("First value: %d %c\n", first_value, s[i]);
            printf("Second value: %d %c\n", second_value , s[i-1]);
            if(second_value < first_value) {
                first_value = first_value - second_value;
                sum += first_value;
            } else{
                sum += first_value;
            }
        } else {
            return first_value;
        }
    }
    return sum;
}


int main(void) {
    const char s[] = "V";
    printf("%d\n", romanToInt(s));
    return 0;
}
