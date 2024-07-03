#include <stdio.h>

int main() {
    int var1, var2, temp;
    printf("Enter two integers: ");
    scanf("%d %d", &var1, &var2);

    // Swap using a temporary variable
    temp = var1;
    var1 = var2;
    var2 = temp;

    printf("After swapping, first number = %d\n", var1);
    printf("After swapping, second number = %d", var2);
    return 0;
}

