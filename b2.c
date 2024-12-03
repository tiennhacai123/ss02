#include<stdio.h>
int main (){
    int n;
    int count = 0;
    int checkNum;
    printf("So phan tu cua mang: ");
    scanf("%d", &n);
    if (n <= 0 || n > 100) {
        printf("So phan tu khong hop le!\n");
        return 1;
    }
    int arr[n];
    for(int i=0 ; i<n ; i++) {
        printf("arr[%d] = ",i);
        scanf("%d",&arr[i]);
    }
    printf("Nhap so can check: \n ");
    scanf("%d",&checkNum);
    for(int i=0 ; i<n ; i++) {
        if(arr[i]== checkNum){
            count++;
        }
    }
    printf("So lan xuat hien cua so %d la: %d", checkNum, count);
    return 0;
}