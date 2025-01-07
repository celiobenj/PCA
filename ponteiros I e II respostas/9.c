#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *find_char_positions(const char *str, char ch, int *size) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    int *positions = (int *)malloc(count * sizeof(int));
    if (positions == NULL) {
        *size = 0;
        return NULL;
    }

    int index = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == ch) {
            positions[index++] = i;
        }
    }

    *size = count;
    return positions;
}

int main() {
    const char *text = "programming is fun";
    char target = 'g';
    int size;

    int *positions = find_char_positions(text, target, &size);

    if (positions != NULL) {
        printf("Character '%c' found at positions: ", target);
        for (int i = 0; i < size; i++) {
            printf("%d ", positions[i]);
        }
        printf("\nTotal occurrences: %d\n", size);

        free(positions);
    } else {
        printf("Memory allocation failed or no occurrences found.\n");
    }

    return 0;
}
