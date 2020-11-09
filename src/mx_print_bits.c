#include "libmx.h"

void print_bits(char num) {
    for(int i = 256; i > 0; i = i / 2) {
        if(num & i)
            printf("1 ");
        else
            printf("0 ");
    }
}
