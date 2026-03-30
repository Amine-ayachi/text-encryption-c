#include <stdio.h>
#include <string.h>

int main() {
    char text[100];
    char encrypted[100];
    char decrypted[100];
    int shift;
    int i = 0;
    FILE *file;

    printf("Enter text: ");
    scanf("%s", text);

    printf("Enter shift value: ");
    scanf("%d", &shift);

    while (text[i] != '\0') {
        encrypted[i] = text[i] + shift;
        i = i + 1;
    }
    encrypted[i] = '\0';

    printf("\nEncrypted text: %s\n", encrypted);

    file = fopen("encrypted.txt", "w");

    if (file != NULL) {
        fprintf(file, "%s", encrypted);
        fclose(file);
        printf("Encrypted text saved in encrypted.txt\n");
    } else {
        printf("Error while opening file\n");
    }

    i = 0;
    while (encrypted[i] != '\0') {
        decrypted[i] = encrypted[i] - shift;
        i = i + 1;
    }
    decrypted[i] = '\0';

    printf("Decrypted text: %s\n", decrypted);

    return 0;
}
