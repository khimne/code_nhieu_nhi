#include<stdio.h>
int main (){
        //int n;
        //int *p;
        //p=&n;
        //scanf("%d",p);
        //printf("n=%d",*p);
int*p;

        //nhap n1
        int n1;
        p=&n1;
        scanf("%d",p);

        //nhap n2
        int n2;
        p=&n2;
        scanf ("%d",p);

        // tang gia tri n1 len 2 lan
        // n1*=2
        p= &n1;
        (*p)*=2;
        // in n1
        p=&n1;
        printf("%d\n",*p);
        // in n2
        p=&n2;
        printf("%d\n",*p);
}
