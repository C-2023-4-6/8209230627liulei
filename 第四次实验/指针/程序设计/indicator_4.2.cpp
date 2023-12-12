#include <stdio.h>
#include <string.h>

int parseHex(const char* const hexString) {
    int len = strlen(hexString);
    int re = 0;
    for (int i = 0; i < len; i++) {
        int num = 0;
        if (hexString[i] >= '0' && hexString[i] <= '9') {
            num = hexString[i] - '0';
        }
        else if (hexString[i] >= 'A' && hexString[i] <= 'F') {
            num = hexString[i] - 'A' + 10;
        }
        else if (hexString[i] >= 'a' && hexString[i] <= 'f') {
            num = hexString[i] - 'a' + 10;
        }
        re = re * 16 + num;
    }
    return re;
}

int main() {
    const char* hexString = "A5";
    int re = parseHex(hexString);
    printf("%d\n", re);
    return 0;
}