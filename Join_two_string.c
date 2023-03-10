#include "includes.h"

char *join_two_string(char const *s1, char const *s2) {
    int len = 0;
    int j = 0;

    while (s1[len] != '\0') {
        len++;
    }
    while (s2[j] != '\0') {
        j++;
        len++;
    }
    len = len + 1;

    char *ret = (char *)malloc(sizeof(char) * len);

    len = 0;
    while (s1[len]) {
        ret[len] = s1[len];
        len++;
    }

    
    j = 0;
    while (s2[j] != '\0') {
        ret[len] = s2[j];
        len++;
        j++;
    }


    ret[len] = '\0';

    return ret;
}

int main(void) {
    char *join = join_two_string("Hello ", "world");
    printf("%s\n", join);
    free(join);
    return 0;
}
