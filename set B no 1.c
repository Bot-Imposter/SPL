#include <stdio.h>

int main() {
    char name[100];
    int age;

    printf("name: ");
    scanf("%s", name);
    printf("age: ");
    scanf("%d", &age);

    if (hasUniqueCharacters(name)) {
        printf("unique: YES\n");
        modifyString(name);
        printf("modified string: %s\n", name);
    } else {
        printf("unique: No\n");
    }

    if (isLuckyNumber(age)) {
        printf("lucky Number: yes\n");
    } else {
        printf("lucky Number: no\n");
    }

    return 0;
}

int hasUniqueCharacters(char *str) {
    for (char *p = str; *p != '\0'; p++) {
        for (char *q = p + 1; *q != '\0'; q++) {
            if (*p == *q)
                return 0;
        }
    }
    return 1;
}

void modifyString(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = str[i];
        if (ch == 'a') str[i] = 'b';
        else if (ch == 'e') str[i] = 'f';
        else if (ch == 'i') str[i] = 'j';
        else if (ch == 'o') str[i] = 'p';
        else if (ch == 'u') str[i] = 'v';
        else if (ch == 'A') str[i] = 'B';
        else if (ch == 'E') str[i] = 'F';
        else if (ch == 'I') str[i] = 'J';
        else if (ch == 'O') str[i] = 'P';
        else if (ch == 'U') str[i] = 'V';
    }
}

int isLuckyNumber(int num) {
    if (num % 2 == 0 || num <= 1)
        return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0)
            return 0;
    }
    return 1;
}


