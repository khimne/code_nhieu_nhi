#include<stdio.h>


void Nhapmang (int arr[],int n){
}
int main(){
    int n;
    scanf("%d",&n);
    int*a=(int*)malloc(n*sizeof(int));
    Nhapmang(a,n);
    inmang(a,n);

}

//cap phat mang 2 chieu
int ** allocateMatrix (int d, int c)
{
    // cap phat 1 mang cac con tro 1 chieu
    int ** m=(int **)malloc(d*sizeof(int*));
    // voi tung con tro  1 chieu, cap phat 1 amgn cac ptu
    // kieu int
    for (int i=0;i<c; i++)
    {
        m[i] = (int*)malloc(c*sizeof(int));
    }
    return m;
}
void sinhMatrix(int **m, int d, int  c){
    for (int i=0; i<n; i++)
    {
        FOI(j,o,c-1)
        m[i][j]=rand()
    }

{   }
