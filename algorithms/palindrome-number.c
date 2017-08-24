#include <stdio.h>

#define true 1
#define false 0
#define bool int

bool
isPalindrome(int x) {
        int reverse = 0;
        int o_value = x;
        if (x < 0)
                return false;
        while (x != 0) {
                reverse *= 10;
                reverse += x % 10;
                x /= 10;
        }
        if (reverse != o_value)
                return false;
        return true;
}

int
main() {
        int x = 1234321;
        printf("%d\n", isPalindrome(x));
        return 0;
}
