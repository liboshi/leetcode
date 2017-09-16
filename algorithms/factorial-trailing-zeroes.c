#include <stdio.h>

int trailingZeroes(int n) {
        int ret = 0;
        for(long long i = 5; n / i > 0; i *= 5) {
                ret += (n / i);
        }
        return ret;
}

int main() {
        return 0;
}
