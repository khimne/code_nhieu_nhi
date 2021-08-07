#include<stdio.h>
#include<math.h>
#define FOI(i,l,r) for (int i=1; i<r; i++)
//kiem tra vs dem so thi auto cam co flag
int main (){


            FOI(i,1000,9999)
            {
                //Kiem tra xem i co phai la so chinh phuong hay k
                int flag=1;
                // khai can
                float can=sqrt(i);
                // lam tron
                can=round(can);
                // binh phuong
                can *=can;
                //so sanh voi so ban dau
                if ((int)can !=1)
                {
                    flag =0;
                }
                if (flag==1)
                {
                    printf("%d",i);
                }
            }

        return 0;

}
