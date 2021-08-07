#include<stdio.h>
#include<stdlib.h>
#define MAX 100

void doc(int a[], int b[], int* n1,int* n2)
{
    FILE *f= fopen("c3.txt","r");
    fscanf(f,"%d",n1);
    for(int i=0;i<*n1;i++){

        fscanf(f,"%d",&a[i]);
    }
    fscanf(f,"%d",n2);
    for (int i=0;i<*n2;i++)
    {
        fscanf(f,"%d",&b[i]);
    }
    fclose(f);
}

int tronMang(int a[MAX],int b[MAX],int c[MAX],int n1, int n2)
{
    int i = 0, j = 0, k = 0;
    while(i < n1 && j < n2)
        c[k++] = a[i]<b[j]?a[i++]:b[j++];
    while(i<n1)
        c[k++]=a[i++];
    while(j<n2)
        c[k++]=b[j++];
}

void xoaPhanTuTrung (int a[], int* n)
{
    for (int i=1; i<*n; i++)
    {
        if (a[i]==a[i-1])
        {
            for (int j=i; j<(*n)-1; j++)
                a[j] = a[j+1];
            (*n)--;
            i--;
        }
    }
}
void inMang(int a[], int n)
{
    for (int i=0; i<n; i++)
        printf("%4d ",a[i]);
    printf("\n");
}
int main(){
    int n1,n2,n;
    int a[MAX],b[MAX],c[MAX];
    doc(a,b,&n1,&n2);
    tronMang(a,b,c,n1,n2);
    n=n1+n2;
    xoaPhanTuTrung(c,&n);
    inMang(c,n);
}
