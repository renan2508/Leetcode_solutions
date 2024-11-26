bool isPalindrome(int x) {
    char str[100];
    char str2[100];
    sprintf(str2, "%d", x);
    sprintf(str, "%d", x);
    int size_string = strlen(str);

    char *start = str;
    char *end = str + size_string -1;
    while(end > start){
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }

    if(strcmp(str, str2) == 0){
        return true;
    } else{
        return false;
    }
}