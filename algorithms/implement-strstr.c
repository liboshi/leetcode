#include <stdio.h>
#include <string.h>

int strStr(char* haystack, char* needle) {
        const char *p = haystack;
        const size_t len = strlen(needle);

        if (len == 0) return 0;

        for (; (p = strchr(p, *needle)) != 0; p++) {
                if (strncmp(p, needle, len) == 0)
                        return p - haystack;
        }
        return -1;
}

int main() {
        return 0;
}
