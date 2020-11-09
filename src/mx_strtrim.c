#include "libmx.h"

char *mx_strtrim(const char *str) {
    int i;
    int j;
    int length = mx_strlen(str);
    char *s = mx_strnew(length);

    if(!str)
        return NULL;
    for(j = 0; str[j] && mx_isspace(str[j]); j++);
    for(i = length - 1;  mx_isspace(str[i]); i--);
    mx_strncpy(s, (char*)&str[j], i - j + 1);
    return s;
}
