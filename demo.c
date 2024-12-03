#include<stdio.h>

int main(){
    // khai bao mang 1 chieu (mang tinh)
    int arr[5];
    // khai bao va gan  gia tri
    int arrInit[3] = {1,2,3};


    //nhap cac gia tri cho phan tu mang array
    for(int i = 0; i < 5; i++){
        printf("arr[%d]= ",i);
        scanf("%d",&arr[i]);
        printf("\n arr[%d]= %d",i,arr[i]);
    }
    return 0;
}