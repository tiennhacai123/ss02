#include<stdio.h>
#include<stdlib.h>

void insertElementArray(int **pArray, int );
int main(){
    // b1 : xác định vị trí cần chèn
    // b2 : Cấp phát mảng mới (+1)
    // b3 : Từ vị trí cần chèn dịch chuyển các phânf từ sang phải 1 đơn vị
    // đầu vào:  
    // mảng 
    //vị trí chèn
    // n(số phânf. tử của mảng)
    // giá trị cần. chèn
    //Xử lý
    //b1: check vị trí chèn có hợp lệ không
    // if( position < 0 || position > n )
    // return;
    //b2: cấp phát mảng mới
    //b3: dịch chuyển ===>   
    //b4: tăng n lên 1
    // ===> đầu ra mảng mới 
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