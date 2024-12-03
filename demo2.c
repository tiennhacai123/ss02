#include<stdio.h>
#include<stdlib.h>
int main(){
    // mang dong
    int n;
    int *pArray = NULL;
        printf("Moi ban nhap vao so phan tu cua mang ");
        scanf("%d",&n);
    // cap phat bo nho dong
    pArray = (int*) malloc(n * sizeof(int));

    //nhap vao  phan tu dau tien cua mang  dong 
    printf("nhap vao cac phan tu cua mang dong ");
    for(int i=0; i < n; i++){
        scanf("%d",pArray + i);
    }
    for(int i = 0; i < n; i++){
        printf("\n arr[%d] = %d", i, *(pArray + i));
    }
    return 0;
}
