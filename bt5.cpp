#include <stdio.h>
int main() {
    int year, month;
    printf("Nhap nam: ");
    scanf("%d", &year);
    printf("Nhap thang (1-12): ");
    scanf("%d", &month);
    if (month < 1 || month > 12) {
        printf("Thang khong hop le!\n");
        return 1;
    }
    int days_in_month;
    if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
            days_in_month = 29;
        } else {
            days_in_month = 28; 
    }
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
        days_in_month = 30;
    } else {
        days_in_month = 31;
    }
    printf("Thang %d nam %d co %d ngay.\n", month, year, days_in_month);
return 0;
}
