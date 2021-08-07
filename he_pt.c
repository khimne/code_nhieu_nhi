#include<stdio.h>
int main(){
    float a,b,c,d,e,f;
    scanf("%f%f%f", &a, &b, &e);
    scanf("%f%f%f", &c, &d, &f);
    float D=a*d-c*b;
    float Dx=d*e-b*f;
    float Dy=a*f-c*e;
    float x = Dx/D;
    float y = Dy/D;
    int z=y*100000;

    if(D!=0){
        printf("He phuong trinh co nghiem duy nhat\n");
        printf("x = %0.5f\n", x);
        printf("y = %0.5f",(float)z/100000);
    }
    else if(Dx==Dy)
        printf("He phuong trinh co vo so nghiem");
    else{
        printf("He phuong trinh vo nghiem");
    }
}
