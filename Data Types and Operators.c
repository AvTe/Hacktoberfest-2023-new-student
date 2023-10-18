#include <stdio.h>

int main() {
    int num1 = 5;
    float num2 = 3.14;
    char ch = 'A';

    int sum = num1 + (int)num2; // Typecasting
    printf("Sum: %d\n", sum);

    printf("Character: %c\n", ch);
    return 0;
}
