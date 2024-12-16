#include <stdio.h>

void add_array(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
}
void export_array(int *arr, int n) {
    printf("Cac phan tu trong mang la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int length_array(int *arr) {
    int count = 0;
    while (*arr != '\0') {
        count++;
        arr++;
    }
    return count;
}
int find_sum(int *arr, int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
int find_sum(int *arr, int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}
int main() {
    int n, choice;
    int arr[100];
    do {
        printf("\nMENU\n");
        printf("1. Nhap vao so phan tu va tung phan tu\n");
        printf("2. Hien thi cac phan tu trong mang\n");
        printf("3. Tinh do dai mang\n");
        printf("4. Tinh tong cac phan tu trong mang\n");
        printf("5. Hien thi phan tu lon nhat\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1:
                printf("Nhap so luong phan tu: ");
                scanf("%d", &n);
                add_array(arr, n);
                break;
            case 2:
                export_array(arr, n);
                break;
            case 3:
                printf("Do dai cua mang la: %d\n", length_array(arr));
                break;
            case 4:
                printf("Tong cac phan tu trong mang la: %d\n", find_sum(arr, n));
                break;
            case 5:
                printf("Phan tu lon nhat trong mang la: %d\n", find_sum(arr, n));
                break;
            case 6:
                printf("Ket thuc chuong trinh!\n");
                break;
            default:
                printf("Lua chon khong hop le. Xin vui long chon lai!\n");
        }
    } while (choice != 6);

    return 0;
}
