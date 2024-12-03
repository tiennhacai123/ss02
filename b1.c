#include<stdio.h>
int main() {
    int n;
    printf("So phan tu cua mang: ");
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
    int max = arr[0];
    for (int i = 0; i < n; i++) {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    printf("gia tri lon nhat la %d", max);

    return 0;
}
