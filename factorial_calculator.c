#include <stdio.h>

int main() {
    int n, factorial = 1;

    printf("Enter the number for which you want to calculate the factorial: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial is undefined for negative numbers.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            factorial *= i;
        }
        printf("The factorial of %d is %d\n", n, factorial);
    }

    return 0;
}
