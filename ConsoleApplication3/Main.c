#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int n, m, count = 0;

    // Введення числа n
    printf("Введіть натуральне число n: ");
    scanf("%d", &n);

    // Перевірка всіх можливих значень m
    for (m = 1; m < n; m++) {
        if (n / m == n % m) {
            count++;
        }
    }

    // Виведення результату
    printf("Кількість рівних дільників числа %d: %d\n", n, count);

    return 0;
}
