#include <stdio.h>

int main() {
    FILE *file = fopen("example.txt", "w");

    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    fprintf(file, "Hello, World!\n");
    fclose(file);

    file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    char content[100];
    while (fgets(content, sizeof(content), file)) {
        printf("%s", content);
    }

    fclose(file);
    return 0;
}
