//In mang vua nhap
#include<stdio.h>
int main()
{
    int a[8],i;
    for (i=0;i<8;i++){
        scanf("%d",(a+i));
    }
    printf("Mang vua nhap:");
    for (i=0;i<8;i++){
        printf("\t%d",*(a+i));
    }
}
//in mang a bang cach su dung con cho p
#include<stdio.h>
int main()
{
    int a[8],i,*p;
    a=p;
    for (i=0;i<8;i++){
        scanf("%d",(p+i));
    }
    printf("Mang vua nhap:");
    for (i=0;i<8;i++){
        printf("\t%d",*(p+i));
    }
//dung con tro ham . nhap 1 day cac so. tinh trung binh cong cac so am va tbc cac so duong
#include<stdio.h>
    void nhap(int *a){
        for(int i=0;i<8;i++){
            scanf("%d",(a+i));
        }
    }
    void trungbinhcong(int a[]){
    int dem_a=0, dem_d=0, tong_a=0, tong_d=0;
        for (int i=0;i<8;i++){
            if (a[i]>0) {tong_d+=a[i]; dem_d++;}
            else {tong_a+=a[i]; dem_a++;}
        }
    printf("\nTBC cac so duong: %0.2f",(float)tong_d/dem_d);
    printf("\nTBC cac so am: %0.2f",(float)tong_a/dem_a);
    }
    void xuat(int a[]){
    for (int i=0; i<8;i++){
        printf("%d\n",a[i]);
    }
    }

    int main()
    {
        int a[8];
        nhap(a);
        printf("mang vua nhap:");
        trungbinhcong(a);
    }
