#include "libmx.h"

char *mx_substr(char const *s, unsigned int start, size_t len) {
	int count = 0;
	char *sub;

	sub = (char *)malloc(len + 1);
	while(count < (int)len) {
		sub[count] = s[start];
		count++;
		start++;
	}
	sub[count] = '\0';
	return (sub);
}
