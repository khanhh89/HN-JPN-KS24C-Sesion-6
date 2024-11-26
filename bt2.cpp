#include <cstdio>

int main() {
    int number, even_count = 0, odd_count = 0;
    printf("Nhap 5 so nguyen:\n");
    for (int i = 1; i <= 5; i++) {
        printf("Nhap so thu %d: ", i);
        scanf("%d", &number);
        if (number % 2 == 0) {
            even_count++;
        } else {
            odd_count++;
        }
    }
    printf("So luong so chan: %d\n", even_count);
    printf("So luong so le: %d\n", odd_count);

    return 0;
}
