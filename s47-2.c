#include <stdio.h>
#include <string.h>

void encode(int n, char *s, char *output) {
    int length = strlen(s);
    for (int i = 0; i < length; i++) {
        // Shift each character by its corresponding position in the string
        output[i] = 'A' + (s[i] - 'A' + n % 26) % 26;
    }
    output[length] = '\0'; // Null-terminate the output string
}

int main() {
    int n;
    char s[100]; // Adjust the size as needed
    char output[100];

    // Example input
    scanf("%d %s", &n, s);

    // Encode the string
    encode(n, s, output);

    // Print the encoded string
    printf("%s\n", output);

    return 0;
}
