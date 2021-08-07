//3.xay dung ham gia tri 2 bien
#include<stdio.h>
 void swap(int*a, int*b) {
  //  printf("%d,%d\n",*a,*b);
    int tmp=*a;
    *a=*b;
    *b=tmp;
 }
int main(){
        int a;
        int b;
        scanf("%d",&a);
        scanf("%d",&b);
       //  printf("%d, %d",a,b);
        swap(&a,&b);
        printf("%d,%d",a,b);
}
