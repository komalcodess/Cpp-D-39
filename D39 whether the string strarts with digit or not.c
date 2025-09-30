#include <stdio.h>
#include <ctype.h>

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);

    if (isdigit(str[0])) {
        printf("The string starts with a digit.\n");
    } else {
        printf("The string does not start with a digit.\n");
    }

    return 0;
}
