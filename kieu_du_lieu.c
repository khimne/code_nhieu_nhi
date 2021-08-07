
// tu bien con trỏ
#include<stdio.h>
typedef struct {int x,y;}
Diem;
int main(){
    Diem *p1,d;
    p1=&d;
    printf("Nhap x,y:");
    scanf("%d%d",p1->x,p1->y);
    printf("(x,y)=(%d,%d)",p1->x,p1->y);

}
