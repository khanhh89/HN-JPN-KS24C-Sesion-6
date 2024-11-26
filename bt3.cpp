#include <stdio.h>
int main() {
    const char correct_password[] = "12345";
    char user_input[50];                   
    bool is_correct = true;                 
    printf("Nhap mat khau: ");
    scanf("%s", user_input);
    for (int i = 0; correct_password[i] != '\0' || user_input[i] != '\0'; i++) {
        if (correct_password[i] != user_input[i]) {
            is_correct = false;
            break;
        }
    }
    if (is_correct) {
        printf("Mat khau dung!\n");
    } else {
        printf("Mat khau sai!\n");
    }

    return 0;
}
