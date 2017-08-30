#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* addBinary(char* a, char* b) {
        int la = strlen(a);
        int lb = strlen(b);
        int i = la - 1;
        int j = lb - 1;
        int k = la > lb ? la : lb;
        int c, va, vb, v = 0;
        int sum = 0;

        char* ret = (char *)malloc(k + 2);
        ret[0] = '0';
        ret[k + 1] = '\0';

        while (k >= 0) {
                va = i >= 0 ? (a[i--] - '0') : 0;
                vb = j >= 0 ? (b[j--] - '0') : 0;
                sum = va + vb + c;
                c = sum / 2;
                v = sum % 2;
                ret[k--] = '0' + v;
        }
        if (ret[0] == '0') {
                printf("%s\n", ret + 1);
                return ret + 1;
        } else {
                printf("%s\n", ret);
                return ret;
        }
}

int main() {
        return 0;
}
