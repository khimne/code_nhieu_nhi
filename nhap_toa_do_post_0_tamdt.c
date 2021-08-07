//Nhap toa do post 0 la tam duong tron
#include<stdio.h>
#include<math.h>

struct toaDo
{
    int x ;
    int y ;
};
struct toaDo nhaptoaDo()
{
    struct toaDo pos;
    printf("Nhap toa do: ");
    scanf("%d%d", &pos.x, &pos.y);
    return pos;
}
void tamduongtron (struct toaDo pos)
{
    if (pos.x==pos.y)
    {
        printf("Toa do %d %d la tam duong tron", pos.x, pos.y);

    }
    else
    {
        printf("Toa do %d %d khong la tam duong tron", pos.x, pos.y);
    }

}

int main()
{
    struct toaDo pos0;
    pos0=nhaptoaDo();
    tamduongtron(pos0);
    return 0;
}
