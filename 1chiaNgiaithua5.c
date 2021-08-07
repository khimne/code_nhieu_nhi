

#include<stdio.h>
int main(){
        int n;
        printf("Nhap so n: ");
        scanf("%d", &n);
        int s=0;
        int gt=1;
        for (int i=1; i<=n; i++)

        {
            s+=(float)1/gt;                 //ep kieu ep so 1 thanh fload
        }
    printf("s=%.2f",s);
}

