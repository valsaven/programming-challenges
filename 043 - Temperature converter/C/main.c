#include <stdio.h>

int main() {
    double t, f, k;

    printf("Value to convert (ºC): ");
    scanf("%lf", &t);

    f = ((9.0 / 5) * t) + 32;
    k = t + 273.15;

    printf("%g ºF\n", f);
    printf("%g K\n", k);

    return 0;
}
