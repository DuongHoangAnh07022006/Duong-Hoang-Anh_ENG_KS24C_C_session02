#include <stdio.h>

int main() {
    // Ki?u s? nguyên (int): Luu tr? các s? nguyên, kích thu?c thu?ng là 4 byte
    int age = 18; // Bi?n age luu tu?i

    // Ki?u s? nguyên không d?u (unsigned int): Luu tr? s? nguyên không âm, kích thu?c thu?ng là 4 byte
    unsigned int year = 2024; // Bi?n year luu nam (không âm)

    // Ki?u s? th?c don chính xác (float): Luu các s? th?c, kích thu?c thu?ng là 4 byte
    float temperature = 36.5; // Bi?n temperature luu nhi?t d? co th?

    // Ki?u s? th?c dôi chính xác (double): Luu các s? th?c có d? chính xác cao hon float, kích thu?c thu?ng là 8 byte
    double pi = 3.14159265358979; // Bi?n pi luu giá tr? s? Pi

    // Ki?u ký t? (char): Luu tr? m?t ký t? don, kích thu?c thu?ng là 1 byte
    char grade = 'A'; // Bi?n grade luu di?m x?p lo?i

    // Ki?u chu?i (m?ng ký t?): Luu tr? chu?i ký t?, c?n khai báo kích thu?c m?ng d? l?n
    char name[50] = "Duong Hoang Anh"; // Bi?n name luu h? tên

    // Ki?u li?t kê (enum): Luu tr? các giá tr? nguyên d?i di?n cho các h?ng s? d?nh nghia tru?c
    enum Color {Red, Green, Blue}; // Ð?nh nghia ki?u li?t kê Color
    enum Color favoriteColor = Green; // Bi?n favoriteColor luu màu yêu thích

    // In các bi?n d? ki?m tra giá tr?
    printf("Tu?i: %d\n", age);
    printf("Nam: %u\n", year);
    printf("Nhi?t d?: %.2f\n", temperature);
    printf("S? Pi: %.14f\n", pi);
    printf("Ði?m x?p lo?i: %c\n", grade);
    printf("Tên: %s\n", name);
    printf("Màu yêu thích: %d\n", favoriteColor); // In giá tr? enum du?i d?ng s? nguyên

    return 0;
}

