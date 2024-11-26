#include <cstdio>
#include <cmath>
int main() {
    double a, b, c;
    printf("Nhap he so a: ");
    scanf("%lf", &a);
    printf("Nhap he so b: ");
    scanf("%lf", &b);
    printf("Nhap he so c: ");
    scanf("%lf", &c);
    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                printf("Phuong trinh co vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        } else {
            double x = -c / b;
            printf("Phuong trinh co nghiem duy nhat: x = %.2lf\n", x);
        }
    } else {
        double delta = b * b - 4 * a * c;
        if (delta > 0) {
            double x1 = (-b + sqrt(delta)) / (2 * a);
            double x2 = (-b - sqrt(delta)) / (2 * a);
            printf("Phuong trinh co hai nghiem phan biet:\n");
            printf("x1 = %.2lf\n", x1);
            printf("x2 = %.2lf\n", x2);
        } else if (delta == 0) {
            double x = -b / (2 * a);
            printf("Phuong trinh co nghiem kep: x = %.2lf\n", x);
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }

    return 0;
}
