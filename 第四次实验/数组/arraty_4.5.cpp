#include <iostream>
using namespace std;

int indexOf(const char s1[], const char s2[]) {
    int len1 = 0;
    while (s1[len1] != '\0') {
        len1++;
    }
    int len2 = 0;
    while (s2[len2] != '\0') {
        len2++;
    }
    for (int i = 0; i <= len2 - len1; i++) {
        bool is = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                is = false;
                break;
            }
        }
        if (is) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int maxSize = 100;
    char s1[maxSize];
    char s2[maxSize];

    cout << "Enter the first string: ";
    cin.getline(s1, maxSize);
    cout << "Enter the second string: ";
    cin.getline(s2, maxSize);

    int index = indexOf(s1, s2);

    if (index != -1) {
        std::cout << "s1 is a substring of s2. Index: " << index << std::endl;
    }
    else {
        std::cout << "s1 is not a substring of s2." << std::endl;
    }

    return 0;
}