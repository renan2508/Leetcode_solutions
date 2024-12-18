#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* mergeAlternately(char * word1, char * word2){
    int size1 = strlen(word1);
    int size2 = strlen(word2);
    static char* merged;

    merged = malloc((size1+size2) * sizeof(char));

    char *ptr_merged = merged;
    char *ptr = word1;
    char *ptr2 = word2;


    while(*ptr != '\0' || *ptr2 != '\0'){
        if(*ptr != '\0'){
            *ptr_merged = *ptr;
            ptr++;
            ptr_merged++;
        }
        
        if(*ptr2 != '\0'){
            *ptr_merged = *ptr2;
            ptr2++;
            ptr_merged++;
        }
    }

    *ptr_merged = '\0';
    return merged;
}

int main(){

    char word1[100] = "acdada cccc";
    char word2[100] = "bdd";
    mergeAlternately(word1, word2);

    char* merged = mergeAlternately(word1, word2);

    printf("%s", merged);
    return 0;   
}