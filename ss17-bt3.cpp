#include <stdio.h>
#include <string.h>

void add_str(char *str) {
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
}

void reverse_str(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int countCharcter(char *str) {
    int count = 0, i;
    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == ' ' && str[i + 1] != ' ') {
            count++;
        }
    }
    if (str[0] != ' ') {
        count++;
    }
    return count;
}

void compare(char *str1, char *str2) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    if (len1 > len2) {
        printf("Chuoi ban dau dai hon chuoi vua nhap.\n");
    } else if (len1 < len2) {
        printf("Chuoi vua nhap dai hon chuoi ban dau.\n");
    } else {
        printf("Hai chuoi co do dai bang nhau.\n");
    }
}

void captl_str(char *str) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

void connect_str(char *str1, char *str2) {
    strcat(str1, str2);
}

int main() {
    char str[100], str2[100];
    int choice;

    do {
        printf("\n\tMENU\t\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi dao nguoc\n");
        printf("3. Dem so luong tu trong chuoi\n");
        printf("4. So sanh chuoi voi chuoi vua nhap\n");
        printf("5. In hoa tat ca chu cai trong chuoi\n");
        printf("6. Noi chuoi voi chuoi vua nhap\n");
        printf("7. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_str(str);
                break;
            case 2:
                reverse_str(str);
                printf("Chuoi dao nguoc: %s\n", str);
                break;
            case 3:
                printf("So luong tu: %d\n", countCharcter(str));
                break;
            case 4:
                add_str(str2);
                compare(str, str2);
                break;
            case 5:
                captl_str(str);
                printf("Chuoi in hoa: %s\n", str);
                break;
            case 6:
                add_str(str2);
                connect_str(str, str2);
                printf("Chuoi sau khi noi: %s\n", str);
                break;
            case 7:
                printf("Ket thuc chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Xin vui long chon lai!\n");
        }
    } while (choice != 7);

    return 0;
}
