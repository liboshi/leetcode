/*
 * Excel Sheet Column Number
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int titleToNumber(char* s) {
        int ret = 0;
        for (int i = 0; i < strlen(s); i++) {
                ret = ret * 26 + s[i] - 64;
        }
        return ret;
}
