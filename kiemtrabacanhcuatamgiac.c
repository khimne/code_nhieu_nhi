#include<stdio.h>
//Khong nhap duoc tu ban phim de tim ra tam giac vuong can

int main(){
    float a,b,c;
    scanf("%f%f%f", &a,&b,&c);
        if (a+b<=c || a+c<=b || c+b<=a)
            printf("%d,%d,%d khong phai 3 canh tam giac",a,b,c);
        else
        {
            if(a==b==c)
                printf("%.2f, %.2f, %.2f la tam giac deu",a,b,c);
            else if(a==b || b==c || c==a)
                printf("%.2f,%.2f,%.2f la tam giac can",a,b,c);
            else if(a*a+b*b==c*c || a*a+c*c==b*b || c*c+b*b==a*a)
                printf("%.2f, %.2f, %.2f la tam giac vuong",a,b,c);
            else
                printf("%.2f, %.2f, %.2f la tam giac thuong",a,b,c);
        }
    return 0;
}
