#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,x1,x2;
    printf("Nhap 3 so a,b,c:");
    scanf("%f%f%f",&a,&b,&c);
    if (a==0)
    {
        if(b==0)
        {
            if(c==0)
                printf("Pt co vo so nghiem");
            else
                printf("Pt vo nghiem");
        }
        else printf("Pt co nghiem duy nhat %0.2f",(float)-c/b);
    }
   else
   {
        float denta=b*b-4*a*c;
       if(denta>0)
            printf("pt co 2 nghiem phan biet x1= %0.2f , x2= %0.2f",(-b+sqrt(denta))/(2*a),(-b-sqrt(denta))/(2*a));
       if(denta==0)
            printf("pt co nghiem kep x=",-b/2*a);
       if(denta<0)
            printf("pt vo nghiem");
   }
}
