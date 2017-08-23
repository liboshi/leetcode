#include <stdio.h>

int reverse(int x) {
        long long reverse = 0;
        if (x == 0) {
                return 0;
        }

        while (x != 0) {
                reverse *= 10;
                reverse += x % 10;
                x /= 10;
        }
        return (reverse < -(1<<31) || reverse > ((1<<31) -1)) ? 0 : reverse;
}
int
main() {
        printf("%d\n", reverse(1234));
}
