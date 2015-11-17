/*
 * Valid Anagram
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef int bool;

enum {
        false,
        true
};

int
ascending(const void* a, const void* b)
{
        return (*(char*)a - *(char*)b);
}

bool
isAnagram(char* s, char* t)
{
        int sum = 0;
        if (strlen(s) != strlen(t)) return false;
        qsort(s, strlen(s), sizeof(char), ascending);
        qsort(t, strlen(t), sizeof(char), ascending);
        for (int i = 0; i < strlen(s); i++) {
                sum = s[i] - t[i];
                if (sum != 0) return false;
        }
        return true;
}
