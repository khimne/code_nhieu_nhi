//5. xay dung cac ham;
// nhiap mang co 2 ptu
// in mang co n ptu
// tim gia tri ln va vi tri phan tu co gt lon nhat do trong mang
 #include<stdio.h>
 #include<math.h>
 #define MAX_SIZE 100
 void Nhapmang(int arr[], int n ){
    for (int i=0; i<n ; i++)
    {
        printf("Phan tu arr[%d]: ",i);
        scanf("%d", &arr[i]);
    }
 }
 void Xuatmang(int arr[], int n) {
  //  printf("\n");
    for (int i=0; i<n; i++)
    {
        printf("%d\t",arr[i]);
    }
}

int GTLN(int a[],int n ){
    int max=a[0];
    for (int i=0; i<n;i++){
        if (a[i]>max){
            max=a[i];
          printf("\nGTLN trong mang:%5d\n",max);
        }
    }
    return max;
}

void vitriptucoGTLN (int a[], int n){
    int vitrimax=GTLN(a,n);
    printf("Vi tri cua phan tu co GTLN: ");
    for (int i=0; i<n;i++){
        if (a[i]==vitrimax){
            printf("%5d",i+1);
        }
    }
}

int main(){
    int arr[MAX_SIZE];
    int n;
    do{
        printf("Nhap n = ");
        scanf("%d", &n);
    }while(n <= 0 || n > MAX_SIZE);
    Nhapmang(arr, n);
    Xuatmang(arr, n);
    vitriptucoGTLN(arr,n);
}
