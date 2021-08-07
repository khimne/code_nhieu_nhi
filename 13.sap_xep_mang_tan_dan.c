#include <stdio.h>
#include <string.h>
//strlen(str)     //String length
//strcmp(str1, str2)  //String compare
//-1 0 1

int main()
{
    char str[100];
    printf("\tNhap 1 chuoi: ");
    fflush(stdin);
    gets(str);

    printf("\tChuoi vua nhap: %s\n",str);
    printf("\tKi tu thu 2 cua chuoi la: %c\n",str[2]);
    str[5] = '\0';
    printf("\tMang sau khi cat: %s\n",str);

    for (int i=0; i<strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <='z')
        {
            str[i] = str[i] - 'a' + 'A';
        }
    }
    printf("\tMang sau khi viet in hoa: %s\n",str);

}
