#include <stdio.h>
#include <string.h>

void add_str(char *str) {
    printf("Nhap chuoi: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0; // Remove trailing newline
}

void export_str(char *str) {
    printf("Chuoi vua nhap la: %s\n", str);
}

int countCharacter(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            count++;
        }
    }
    return count;
}

int countNum(char *str) {
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= '0' && str[i] <= '9') {
            count++;
        }
    }
    return count;
}

int main() {
    char str[100];
    int choice;

    do {
        printf("\n\tMENU\t\n");
        printf("1. Nhap vao chuoi\n");
        printf("2. In ra chuoi\n");
        printf("3. Dem so luong chu cai\n");
        printf("4. Dem so luong chu so\n");
        printf("5. Dem so luong ky tu dac biet\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                add_str(str);
                break;
            case 2:
                export_str(str);
                break;
            case 3:
                printf("So luong chu cai: %d\n", countCharacter(str));
                break;
            case 4:
                printf("So luong chu so: %d\n", countNum(str));
                break;
            case 5: {
                int size = strlen(str);
                int countChar = countCharacter(str);
                int count_number = countNum(str) ;
                int countSpecial = size - countChar - count_number;
                printf("So luong ky tu dac biet: %d\n", countSpecial);
                break;
            }
            case 6:
                printf("Ket thuc chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 6);

    return 0;
}
