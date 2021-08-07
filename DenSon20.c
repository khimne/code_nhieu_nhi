#include<stdio.h>

int main(){
            int r,x;
            int den=0;
            int son=0;
            printf("Kich thuoc phong hoc: ");
            scanf ("%d%d", &r, &x);
            int hangden=r/2 +r%2;
            int cotden=r/2 +r%2;
            int Tongden=hangden*cotden;
            int Oson=r*x-Tongden;
            int Tongtien=Tongden*50000+Oson*10000;
        printf("Gia tien de tan trang phong hoc la: %d",Tongtien);
}
