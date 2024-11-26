#include <stdio.h>

int main() {
    int num, sumOdd = 0;
    printf("Nhap vao 5 so nguyen:\n");
    for (int i = 1; i <= 5; i++) {
        printf("So thu %d: ", i);
        scanf("%d", &num);
        if (num % 2 != 0) {
            sumOdd = sumOdd + num;
        }
    }
    printf("Tong cac so le la: %d\n", sumOdd);

    return 0;
}
