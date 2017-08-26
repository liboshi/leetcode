#include <stdio.h>

char* longestCommonPrefix(char** strs, int strsSize) {
        char *str = strs[0];

        if (strsSize == 0) {
                str = "";
                return str;
        }

        for (int j = 0; str[j] != '\0'; j++) {
                for (int i = 1; i < strsSize; i++) {
                        if (strs[i][j] != str[j]) {
                                str[j] = '\0';
                        }
                }
        }
        return str;
}

int main() {
        return 0;
}
