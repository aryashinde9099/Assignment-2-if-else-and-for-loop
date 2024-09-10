#include <stdio.h>

void main() {
    char ch1, ch2;

    printf("Enter the first character: ");
    scanf(" %c", &ch1);

    printf("Enter the second character: ");
    scanf(" %c", &ch2);

    if (ch1 == ch2) {
        printf("The characters are equal.\n");
    } else {
        printf("The characters are not equal.\n");
    }

    
}
