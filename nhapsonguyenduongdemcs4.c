//nhap vao 1 so nguyen n dem so chu so trong So do
#include<stdio.h>
int main(){
        int n;
        printf("Nhap vao so nguyen n: ");
        scanf("%d",&n);
        int dem=0;
        while(n>=10)            // Vi du nhap 4567
        {                       // 4567 > 10 roi lay 4567/10 ra n
            n=n/10;             // lap di lap lai vong lap cho den khi nao n<10 thi dung
            dem++;              //
        }
        printf("%d", dem=dem+1);    // in ra dem= dem+1 hoac dem++ nhu nhau
    return 0;                          // y la dem xem ra bao nhieu lan dem so lan n bi chia + them 1
}


