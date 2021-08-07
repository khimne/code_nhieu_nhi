#include<stdio.h>
#include<stdlib.h>   //malloc.h     alloc.h
#include<string.h>

//dynamic allocation

// Cấp phát động mảng có  n p tu kiểu int
//Gỉa về địa chỉ của phần tử đầu tiên
//Realloc

int* capPhatMang (int n)
{
    int *a = (int*)malloc(n*sizeof(int));
    if(a==NULL)
    {
        printf("Khong cap phat thanh cong:\n ");
        return NULL;
    }
    return a;
}
