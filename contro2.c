#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
void nhap(int *a){
    int i;
    for (i=0;i<8;i++);{
       scanf("%d",&a[i]);
    }
}
void trungbinh_cong(int a[]){
    int tong_d=0, tong_a=0, dem_a=0, dem_d=0;
    for(int i=0; i<8;i++){
        if (a[i]>0){
            tong_d+=a[i];
            dem_d++;
        }
        else {
            tong_a+=a[i];
            dem_a++;
        }
    }
        printf("\ntrung binh cong cac so duong: %.2f",(float)(tong_d/dem_d));
        printf("\ntrung binh cong cac so am: %.2f",(float)(tong_a/dem_a));

    }
void xuat(int a[]){
    for(int i=0;i<8;i++){
        printf("%d\n",a[i]);
    }
}
int main (){
    int a[8];
    nhap(a);
    printf("mang vua nhap la:");
    xuat(a);
    trungbinh_cong(a);

}

