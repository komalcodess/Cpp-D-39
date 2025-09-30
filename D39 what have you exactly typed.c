#include <stdio.h>
#include <string.h>

int main() {
    char str[20];
    printf("Enter a string: ");
    scanf("%s", str);

    if (strcmp(str, "Hello love") == 0) {
        printf("You typed Hello love\n");
    } else {
        printf("You typed something else.\n");
    }

    return 0;
}
