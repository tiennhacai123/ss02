#include <stdio.h>
int main() {
    int n;
    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    int arr[n];
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Mang sau khi sap xep tang dan:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
