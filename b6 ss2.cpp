#include <stdio.h>
int main() {
    const float PI = 3.14;
    float radius = 5.0;
    float circumference = 2 * PI * radius; 
    float area = PI * radius * radius;
    printf("B�n k�nh h�nh tr�n: %.2f\n", radius);
    printf("Chu vi h�nh tr�n: %.2f\n", circumference);
    printf("Dien t�ch h�nh tr�n: %.2f\n", area);
    return 0;
}

