#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    if (strlen(str) >10) {
        printf("The string is long (more than 10 characters).\n");
    } else {
        printf("The string is short (10 or fewer characters).\n");
    }

    return 0;
}
