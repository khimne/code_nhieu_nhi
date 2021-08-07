//Liet ke so dang n=abc sao cho n=a^3 + b^3 + c^3
#include<stdio.h>
#define FOI(i,l,r) for (int i=1; i<r; i++)
int main(){
        FOI(i,100,1000)
        {
            int tram=i/100;
            int chuc=i/10%10;
            int donvi=i%10;
            if (i==tram*tram*tram+chuc*chuc*chuc+donvi*donvi*donvi)
            printf("%d",i);
        }
}
