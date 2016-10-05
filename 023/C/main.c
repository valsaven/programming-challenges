#include <stdio.h>

int main() {
    int n;

    printf("Find n! where:\nn = ");
    scanf("%i", &n);

    if (n == 1) {
        printf("%i", 1);
    } else if (n > 1) {
        int counter = 1;

        for (int i = 1; i <= n; i++) {
            counter = counter * i;
        }
        printf("%i\n", counter);
    } else {
        printf("Expected a positive integer.\n");
    }

    return 0;
}
