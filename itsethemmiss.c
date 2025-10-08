#include <stdio.h>
#include <string.h>
#include <ctype.h>

void to_lowercase(char *str) {
    for (; *str; ++str) *str = tolower(*str);
}

int main() {
    char ethem[100];
    printf("What type of its ethem miss do you want (miss or sir): ");
    if (fgets(ethem, sizeof(ethem), stdin)) {
        // Remove newline character if present
        ethem[strcspn(ethem, "\n")] = 0;
        to_lowercase(ethem);

        if (strcmp(ethem, "miss") == 0) {
            printf("\nIts ethem miss\n");
        } else if (strcmp(ethem, "sir") == 0) {
            printf("\nIts ethem sir\n");
        } else {
            printf("\nWe do not support that type of its ethem miss\n");
        }
    }
    return 0;
}
