#include <stdio.h>

int main() {
    int num1 = 10;
    int num2 = 20;
    int sum = num1 + num2;
    int difference = num1 - num2;
    int product = num1 * num2;
    float quotient = (float)num1 / num2;
    printf("So thu nhat: %d\n", num1);
    printf("So thu hai: %d\n", num2);
    printf("Tong hai so: %d\n", sum);
    printf("Hieu hai so: %d\n", difference);
    printf("Tich hai so: %d\n", product);
    printf("Thuong hai so: %.2f\n", quotient);
    return 0;
}

