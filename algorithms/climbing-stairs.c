#include <stdio.h>

int climbStairs(int n) {
        int a = 1, b = 1;
        while (n--)
                a = (b += a) - a;
        return a;
}

int main() {
        int n = 123;
        return climbStairs(n);
}
