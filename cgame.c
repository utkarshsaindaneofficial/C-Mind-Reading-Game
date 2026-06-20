#include <stdio.h>
#include <string.h> // Required for strcmp

int main()
{
    // Step 0: Declare names array properly
    const char *names[10] = {
        "18", "7", "Krish", "999", "vasu",
        "suraj", "raj", "10", "uttam", "45"
    };

    // Step 1: Declare rows
    const char *rows[5][5] = {
        {"10", "vasu", "18", "raj", "45"},
        {"999", "7", "vasu", "suraj", "krish"},
        {"18", "999", "10", "krish", "uttam"},
        {"7", "18", "vasu", "raj", "krish"},
        {"999", "7", "suraj", "10", "45"}
    };

    // Step 2: Print names
    printf("List of Names:\n");
    for (int i = 0; i < 10; i++) {
        printf("[%d] %s\n", i + 1, names[i]);
    }

    printf("\nThink of any one name...\n\n");

    // Step 3: Print rows
    for (int r = 0; r < 5; r++) {
        printf("%d row:\n", r + 1);
        for (int c = 0; c < 5; c++) {
            printf("  %s\n", rows[r][c]);
        }
        printf("\n");
    }

    // Step 4: Build mask for each name
    int mask[10] = {0};
    for (int r = 0; r < 5; r++) {
        for (int c = 0; c < 5; c++) {
            for (int i = 0; i < 10; i++) {
                if (strcmp(rows[r][c], names[i]) == 0) {
                    mask[i] |= (1 << r); // set bit for this row
                }
            }
        }
    }

    // Step 5: User input rows
    printf("Enter the row numbers where your name appeared (end with 0):\n");
    int row, selmask = 0;

    while (1) {
        scanf("%d", &row);
        if (row == 0)
            break;
        if (row >= 1 && row <= 5) {
            selmask |= (1 << (row - 1));
        } else {
            printf("Invalid row!\n");
        }
    }

    // Step 6: Match name
    int found = 0;
    for (int i = 0; i < 10; i++) {
        if (mask[i] == selmask) {
            printf("\nThe name you thought of is: %s\n", names[i]);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("\nCould not detect the name. Maybe wrong row numbers?\n");
    }

    return 0;
}
