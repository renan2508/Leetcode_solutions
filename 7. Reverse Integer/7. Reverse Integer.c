int reverse(int x){
    if (x == INT_MIN || x == INT_MAX) {
        return 0;
    }
    int is_negative = x < 0;
    if (is_negative) {
        x = -x;
    }

    char original_string[12];
    sprintf(original_string, "%d", x);
    int size = strlen(original_string);
    int position_number_original_string = 0;

    char new_string[12];

    for(int i = 0;i <= size; i++){

        if(original_string[i] != '-'){
            new_string[position_number_original_string] = original_string[i];
            position_number_original_string++;
        }
    }

    char *ptr_start = new_string;
    char *ptr_end = new_string + size -1;


    while(ptr_end > ptr_start){
        char temp = *ptr_end;
        *ptr_end = *ptr_start;
        *ptr_start = temp;
        ptr_end--;
        ptr_start++;
    }
    // 123 -> 321

    char *final_string = (char *)malloc(strlen(new_string) + 1);
    strcpy(final_string, new_string);

    long int reversed_num = atol(final_string);

    if(is_negative){
        reversed_num = -reversed_num;
    }

    if(reversed_num < INT_MIN || reversed_num > INT_MAX){
        return 0;
    }
    return (int)reversed_num;
}