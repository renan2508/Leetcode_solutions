int strStr(char* haystack, char* needle) {
    if(strlen(needle) > strlen(haystack) || strlen(needle) == 0){
        return -1;
    }
    const char *pHaystack = haystack;

    while(*pHaystack != '\0'){
        const char *pNeedle = needle;
        const char *pCurrentHaystack = pHaystack;
        while(*pNeedle != '\0' && *pNeedle == *pCurrentHaystack){
            pCurrentHaystack++;
            pNeedle++;
        }
        if(*pNeedle == '\0'){
            return pHaystack - haystack;
        }
        pHaystack++;
    }
    return -1;
}