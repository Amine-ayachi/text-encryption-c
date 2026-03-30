#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    int shift;
    int i = 0;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    int length = strlen(text);

    // chiffrement
    char encrypted[100];

    i = 0;
    while (i < length) {
        encrypted[i] = text[i] + shift;
        i = i + 1;
    }
    encrypted[i] = '\0';

    printf("\nEncrypted text: %s\n", encrypted);

    // dechiffrement
    char decrypted[100];

    i = 0;
    while (i < length) {
        decrypted[i] = encrypted[i] - shift;
        i = i + 1;
    }
    decrypted[i] = '\0';

    printf("Decrypted text: %s\n", decrypted);

    return 0;
}