// Nhap 2 toa do a va b
#include<stdio.h>
int main (){
        struct toaDo {
        int x;
        int y;
        } posA;
    struct toaDo posB;
    scanf("%d%d", &posA.x , &posA.y);
    scanf("%d%d", &posB.x , &posB.y);

    printf("posA(%d,%d)\n", posA.x, posA.y );
    printf("posB(%d,%d)\n", posB.x, posB.y);
    return 0;
}

