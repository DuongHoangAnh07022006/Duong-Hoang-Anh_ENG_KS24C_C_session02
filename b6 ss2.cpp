#include <stdio.h>
int main() {
    const float PI = 3.14;
    float radius = 5.0;
    float circumference = 2 * PI * radius; 
    float area = PI * radius * radius;
    printf("Bán kính hình tròn: %.2f\n", radius);
    printf("Chu vi hình tròn: %.2f\n", circumference);
    printf("Dien tích hình tròn: %.2f\n", area);
    return 0;
}

