#include <stdio.h>

int lengthOfLastWord(char* s) {
        int len = 0;
        while (*s) {
                if (*s++ != ' ') {
                        len++;
                } else if (*s && *s != ' ') {
                        len = 0;
                }
        }
        return len;
}

int main() {
        return 0;
}
