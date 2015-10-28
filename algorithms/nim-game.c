/*
 * Nim Game
 */
#include <stdio.h>

typedef int bool;
enum {
        false,
        true
};

bool
canWinNim(int n)
{
        return !(n % 4 == 0);
}
