//Hien thi khoang cach giua 2 diem
#include<stdio.h>
#include<math.h>
  struct toaDo {
        int x;
        int y;
        } ;
    struct toaDo nhaptoaDo()
    {
        struct toaDo pos;
        printf("Nhap toan do:");
        scanf("%d%d", &pos.x, &pos.y);
        //tra ve vi tri
        return pos;

    }
    void khoangcach2diem (struct toaDo posA, struct toaDo posB)
    {
        float Khiem;
        Khiem=sqrt((posA.x-posB.x)*(posA.x-posB.x)+(posA.y-posB.y)*(posA.y-posB.y));
        printf("Khoang cach 2 diem la: %f", Khiem);
    }
        int main (){
  //  int khoangcach;
    struct toaDo posA;
    struct toaDo posB;
    posA=nhaptoaDo();
    posB=nhaptoaDo();
    khoangcach2diem(posA,posB);
    return 0;
    }
