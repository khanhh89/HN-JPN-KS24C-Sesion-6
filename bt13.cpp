#include <cstdio>
int main() {
    int ngay, thang;
    printf("Nhap ngay sinh: ");
    scanf("%d", &ngay);
    printf("Nhap thang sinh: ");
    scanf("%d", &thang);
    if (thang < 1 || thang > 12 || ngay < 1 || ngay > 31) {
        printf("Ngay thang khong hop le!\n");
        return 1;
    }
	 const char* cung;
    switch (thang) {
        case 1:
            cung = (ngay <= 19) ? "Ma Ket" : "Bao Binh";
            break;
        case 2:
            if (ngay > 29) {
                printf("Thang 2 chi co toi da 29 ngay!\n");
                return 1;
            }
            cung = (ngay <= 18) ? "Bao Binh" : "Song Ngu";
            break;
        case 3:
            cung = (ngay <= 20) ? "Song Ngu" : "Bach Duong";
            break;
        case 4:
            if (ngay > 30) {
                printf("Thang 4 chi co toi da 30 ngay!\n");
                return 1;
            }
            cung = (ngay <= 19) ? "Bach Duong" : "Kim Nguu";
            break;
        case 5:
            cung = (ngay <= 20) ? "Kim Nguu" : "Song Tu";
            break;
        case 6:
            if (ngay > 30) {
                printf("Thang 6 chi co toi da 30 ngay!\n");
                return 1;
            }
            cung = (ngay <= 20) ? "Song Tu" : "Cu Giai";
            break;
        case 7:
            cung = (ngay <= 22) ? "Cu Giai" : "Su Tu";
            break;
        case 8:
            cung = (ngay <= 22) ? "Su Tu" : "Xu Nu";
            break;
        case 9:
            if (ngay > 30) {
                printf("Thang 9 chi co toi da 30 ngay!\n");
                return 1;
            }
            cung = (ngay <= 22) ? "Xu Nu" : "Thien Binh";
            break;
        case 10:
            cung = (ngay <= 22) ? "Thien Binh" : "Bo Cap";
            break;
        case 11:
            if (ngay > 30) {
                printf("Thang 11 chi co toi da 30 ngay!\n");
                return 1;
            }
            cung = (ngay <= 21) ? "Bo Cap" : "Nhan Ma";
            break;
        case 12:
            cung = (ngay <= 21) ? "Nhan Ma" : "Ma Ket";
            break;
        default:
            printf("Ngay thang khong hop le!\n");
            return 1;
    }
    printf("Cung hoang dao cua ban la: %s\n", cung);

    return 0;
}
