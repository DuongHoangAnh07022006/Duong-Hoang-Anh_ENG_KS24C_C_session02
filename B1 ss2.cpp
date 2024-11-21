#include <stdio.h>

int main() {
    // Ki?u s? nguy�n (int): Luu tr? c�c s? nguy�n, k�ch thu?c thu?ng l� 4 byte
    int age = 18; // Bi?n age luu tu?i

    // Ki?u s? nguy�n kh�ng d?u (unsigned int): Luu tr? s? nguy�n kh�ng �m, k�ch thu?c thu?ng l� 4 byte
    unsigned int year = 2024; // Bi?n year luu nam (kh�ng �m)

    // Ki?u s? th?c don ch�nh x�c (float): Luu c�c s? th?c, k�ch thu?c thu?ng l� 4 byte
    float temperature = 36.5; // Bi?n temperature luu nhi?t d? co th?

    // Ki?u s? th?c d�i ch�nh x�c (double): Luu c�c s? th?c c� d? ch�nh x�c cao hon float, k�ch thu?c thu?ng l� 8 byte
    double pi = 3.14159265358979; // Bi?n pi luu gi� tr? s? Pi

    // Ki?u k� t? (char): Luu tr? m?t k� t? don, k�ch thu?c thu?ng l� 1 byte
    char grade = 'A'; // Bi?n grade luu di?m x?p lo?i

    // Ki?u chu?i (m?ng k� t?): Luu tr? chu?i k� t?, c?n khai b�o k�ch thu?c m?ng d? l?n
    char name[50] = "Duong Hoang Anh"; // Bi?n name luu h? t�n

    // Ki?u li?t k� (enum): Luu tr? c�c gi� tr? nguy�n d?i di?n cho c�c h?ng s? d?nh nghia tru?c
    enum Color {Red, Green, Blue}; // �?nh nghia ki?u li?t k� Color
    enum Color favoriteColor = Green; // Bi?n favoriteColor luu m�u y�u th�ch

    // In c�c bi?n d? ki?m tra gi� tr?
    printf("Tu?i: %d\n", age);
    printf("Nam: %u\n", year);
    printf("Nhi?t d?: %.2f\n", temperature);
    printf("S? Pi: %.14f\n", pi);
    printf("�i?m x?p lo?i: %c\n", grade);
    printf("T�n: %s\n", name);
    printf("M�u y�u th�ch: %d\n", favoriteColor); // In gi� tr? enum du?i d?ng s? nguy�n

    return 0;
}

