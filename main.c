#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//count: maximum number of characters to copy from src
char *safeCpSTR(const char *str, size_t count) {
    char *dest = NULL;

    if (str == NULL) return NULL;

    dest = malloc(count+1); //+1 because \0
    size_t i;

    if (dest == NULL) {
        printf("dest is null");
        return NULL;
    }
    
    for (size_t i = 0; i < count && str[i] != '\0'; i++) {
        dest[i] = str[i];
        if (i == count) {
            dest[i] = '\0';
        }
    }
   
    return dest; 
}

int main(void) {
    const char *str = "Hello";
    size_t count = strlen(str); 

    char *dest = safeCpSTR(str, count);

    printf("STR: %s | DEST: %s\n", str, dest);

    free(dest);

    return 0;
}
