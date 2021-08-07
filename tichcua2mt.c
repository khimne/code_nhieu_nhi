#include<stdio.h>
#include<math.h>
#include<conio.h>
main(){
    int a[2][2],b[2][2],c[2][2];
    printf("Nhap ma tran A:");
    for(int i=0;i<2;i++){
        for(int j=0;i<2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("Nhap ma tran B:");
    for(int i=0;i<2;i++){
        for(int j=0;i<2;j++){
            scanf("%d",&b[i][j]);
        }
    }
    printf("In ma tran A:");
    for(int i=0;i<2;i++){
        for(int j=0;i<2;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    printf("In ma tran B:");
    for(int i=0;i<2;i++){
        for(int j=0;i<2;j++){
            printf("%d",b[i][j]);
        }
        printf("\n");
    }
    printf("In mang C:");
     for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
                int sum=0;
            for (int k=0;k<2;k++){
                sum+=a[i][k]*b[k][j];

            }
        c[i][j]=sum;
        }
        printf("%d", sum);
    }

}
