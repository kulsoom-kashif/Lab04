#include <stdio.h>

int main() {
    float num;

    printf("Enter a floating-point number: ");
    scanf("%f", &num);

    printf("With 2 decimal places: %.2f\n", num);
    printf("With 6 decimal places: %.6f\n", num);

    return 0;
}
