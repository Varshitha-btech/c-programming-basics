#include <stdio.h>

int main() {
    FILE *f_all, *f_even, *f_odd;
    int n, num, i;

    // Open files
    f_all = fopen("all_numbers.txt", "w");
    f_even = fopen("even_numbers.txt", "w");
    f_odd = fopen("odd_numbers.txt", "w");

    if (f_all == NULL || f_even == NULL || f_odd == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter how many numbers you want to store: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        // Store in all numbers file
        fprintf(f_all, "%d\n", num);

        // Check even or odd
        if (num % 2 == 0)
            fprintf(f_even, "%d\n", num);
        else
            fprintf(f_odd, "%d\n", num);
    }

    // Close all files
    fclose(f_all);
    fclose(f_even);
    fclose(f_odd);

    printf("\nNumbers stored successfully in files!\n");

    return 0;
}

