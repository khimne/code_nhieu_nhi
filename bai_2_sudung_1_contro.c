// 2. su dung 1 con tro in ra 2 gtri
#include<stdio.h>
int main (){
    int *p;
    int a,b;
    p=&a;
    scanf("%d",p);
    printf("%d\n",*p);
    p=&b;
    scanf("%d",p);
    printf("%d",*p);
    }


