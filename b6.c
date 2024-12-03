#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Nhap so phan tu cua mang 1 (0 < n <= 1000): ");
    scanf("%d", &n);

    if (n <= 0 || n > 1000) {
        printf("So phan tu mang 1 khong hop le!\n");
        return 1;
    }
    int *arr1 = (int *)malloc(n * sizeof(int));
    printf("Nhap cac phan tu cua mang 1:\n");
    for (int i = 0; i < n; i++) {
        printf("arr1[%d] = ", i);
        scanf("%d", &arr1[i]);
    }
    printf("Nhap so phan tu cua mang 2 (0 < m <= 1000): ");
    scanf("%d", &m);

    if (m <= 0 || m > 1000) {
        printf("So phan tu mang 2 khong hop le!\n");
        return 1;
    }
    int *arr2 = (int *)malloc(m * sizeof(int));
    
    printf("Nhap cac phan tu cua mang 2:\n");
    for (int i = 0; i < m; i++) {
        printf("arr2[%d] = ", i);
        scanf("%d", &arr2[i]);
    }
    int *mergedArr = (int *)malloc((n + m) * sizeof(int));
    for (int i = 0; i < n; i++) {
        mergedArr[i] = arr1[i];
    }

    for (int i = 0; i < m; i++) {
        mergedArr[n + i] = arr2[i];
    }
    printf("Mang sau khi gop:\n");
    for (int i = 0; i < n + m; i++) {
        printf("%d ", mergedArr[i]);
    }
    printf("\n");
    free(arr1);
    free(arr2);
    free(mergedArr);
    return 0;
}
