//Nhap toa do các điểm dùng mảng cấu trúc
#include<stdio.h>
typedef   struct {int x,y;} Diem;
void nhap(Diem *d){
    printf("Nhap toa do x: ");
    scanf ("%d", &(d->x));
    printf("Nhap toa do y: ");
    scanf ("%d", &(d->y));
    }



void xuat( Diem d){
    printf("(x,y)=(%d,%d)",d.x,d.y);
    }
int main(){
    Diem d[3];
    for (int i=0;i<3;i++){
        nhap(&d[i]);
    }
     for (int i=0;i<3;i++){
        xuat(d[i]);
    }
}
