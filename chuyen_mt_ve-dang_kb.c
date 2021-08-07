#include<stdio.h>
#include <stdlib.h>
void chuyendoi(char str[])
{
    for (int i=0; i<strlen(str);i++)
    {
        if(str[i] >= 'a' && str[i] <='z')
         { str[i]=str[i]-'a' + 'A' ; }
    }
}
//Kiem tra xem str co phai chuoi doi xung k
int isSymmetric (char str[])
{
    for (int i=0; i<=strlen(str)/2;i++)
    {
        if(str[i]!=str[strlen(str)-1-i])
            return 0;
    }
    return 1;
}

int main()
{
    int t; scanf("%d\n",&t);
    while (t--)
    {
        char str[100];
        fflush(stdin);
        gets(str);
        chuyendoi(str);
        if (isSymmetric(str))
            printf("Symmetric\n");
        else
            printf("Asymmetric");
    }

}
