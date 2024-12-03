#include <stdio.h>
#include <stdlib.h>
int findElementIndex(int *arr, int n, int k) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == k) {
            return i; 
        }
    }
    return -1; 
}
int main() {
    int n, k;
    printf("Nhap so phan tu cua mang (0 < n <= 100): ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    int *arr = (int *)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang:\n");
    for (int i = 0; i < n; i++) {
        printf("arr[%d] = ", i);
        scanf("%d", &arr[i]);
    }
    printf("Nhap gia tri phan tu can xoa (k): ");
    scanf("%d", &k);
    int index = findElementIndex(arr, n, k);
    if (index == -1) {
        printf("Khong co phan tu %d trong mang!\n", k);
    } else {
        for (int i = index; i < n - 1; i++) {
            arr[i] = arr[i + 1]; 
        }
        n--;
        arr = (int *)realloc(arr, n * sizeof(int));
        if (arr == NULL && n > 0) {
            printf("Khong the cap phat lai bo nho!\n");
            free(arr);
            return 1;
        }
        printf("Mang sau khi xoa phan tu %d:\n", k);
        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    free(arr);
    return 0;
}
