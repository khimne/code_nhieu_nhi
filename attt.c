#include <stdio.h>
#include <string.h>

int main()
{
    char plainText[100];
    char cypherText[100];
    int key;
    printf("\tNhap ban ro: ");
    gets(plainText);
    printf("\tNhap khoa: ");
    scanf("%d",&key);
    cypherText[strlen(plainText)]='\0';

    for (int i=0; i<strlen(plainText); i++)
    {
        if (plainText[i]>='a' && plainText[i]<='z')
        {
            printf("%d ",plainText[i]-'a');
            cypherText[i] = 'a'+(plainText[i]-'a'+key)%26;
        }
        else
        {
            cypherText[i] = plainText[i];
        }
    }
    printf("\n");
    printf("\tCyphertext: %s\n",cypherText);

}
