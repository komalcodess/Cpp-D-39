#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[50];
    int i, isLower=1;

    printf("Enter a string: ");
    scanf("%s", str);

    for (i=0; i<strlen(str); i++) {
        if (!islower(str[i])) {
            isLower = 0;
            break;
        }
    }

    if (isLower) {
        printf("The string is all lowercase.");
    } else {
        printf("The string is not all lowercase.");
    }

    return 0;
}
