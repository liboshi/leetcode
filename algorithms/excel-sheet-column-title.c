#include <stdio.h>
#include <stdlib.h>

char* convertToTitle(int n) {
        if (n == 0) return "";

        char *ret = (char *)malloc(10);
        int i = 0;
        while (n > 0) {
                ret[i++] = ((n - 1) % 26) + 'A';
                n = (n - 1) / 26;
        }
        ret[i] = '\0';

        for (int j = 0; j < i / 2; j++) {
                ret[j] ^= ret[i - j - 1];
                ret[i - j - 1] ^= ret[j];
                ret[j] ^= ret[i - j - 1];
        }

        printf("%s", ret);
        return ret;

}

int main() {
        return 0;
}
