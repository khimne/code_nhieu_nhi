#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#define MAX 100

int main()
{
    double x,a,sh,tuSo,mauSo;
    double e=1;
    scanf("%lf %lf",&x,&a);
    mauSo=1;
    tuSo=1;
    for(int i=1; ;i++)
    {
        tuSo*=x;
        mauSo*=i;
        sh=tuSo/mauSo;
        e+=sh;
        if(sh<a)
            break;

    }
    printf("%.10f",e);

}
