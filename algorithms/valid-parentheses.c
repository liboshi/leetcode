#include <stdio.h>

typedef int bool;

enum {
        false,
        true
};

bool isValid(char* s) {
        char* temp = s;
        int j = 0;
        for (int i = 0; s[i] != '\0'; i++) {
                if ((s[i] == '(') || (s[i] == '[') || (s[i] == '{')) {
                        temp[j] = s[i];
                        j++;
                } else if (s[i] == ')') {
                        if (temp == "" || temp[j - 1] != '(') {
                                return false;
                        } else {
                                temp[j - 1] = '\0';
                                j--;
                        }
                } else if (s[i] == '}') {
                        if (temp == "" || temp[j - 1] != '{') {
                                return false;
                        } else {
                                temp[j - 1] = '\0';
                                j--;
                        }
                } else if (s[i] == ']') {
                        if (temp == "" || temp[j - 1] != '[') {
                                return false;
                        } else {
                                temp[j - 1] = '\0';
                                j--;
                        }
                } else
                        return false;
        }
        return (temp[0] == '\0');
}

int main() {
        return 0;
}
