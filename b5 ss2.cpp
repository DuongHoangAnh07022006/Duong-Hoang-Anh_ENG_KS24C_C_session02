#include <stdio.h>
int main() {
    int length = 10;
    int width = 5;
    int perimeter = 2 * (length + width);
    int area = length * width;
    printf("Chieu dai: %d\n", length);
    printf("Chieu rong: %d\n", width);
    printf("Chu vi h�nh chu nhat: %d\n", perimeter);
    printf("Dien t�ch h�nh chu nhat: %d\n", area);
    return 0;
}

