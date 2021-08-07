#include<stdio.h>
#include<math.h>
#include<conio.h>
void khim(float *a)
    {
        float tam=*a;
    }
int main(){
    float a;
    khim(&a);
    scanf("%f",&a);
    printf("%0.2f",a);
    }
