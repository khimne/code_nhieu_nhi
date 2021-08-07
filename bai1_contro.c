#include<stdio.h>
int main (){
int *p1, a;
int *p2, b;
p1=&a;
p2=&b;
scanf("%d",p1);
scanf("%d",p2);
printf("%d\n",*p1);
printf("%d",*p2);
}
