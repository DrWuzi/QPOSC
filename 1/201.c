#include <stdio.h>

int main(void) {
    char firstName[50];
    char lastName[50];

    printf("Bitte geben Sie Ihren Vornamen ein: ");
    scanf("%s", firstName);
    printf("Bitte geben Sie Ihren Nachnamen ein: ");
    scanf("%s", lastName);

    printf("Ihr voller Name lautet: %s %s\n", firstName, lastName);
    return 0;
}
