#include<stdio.h>
#include <string.h>

int main(){

    char str[100];
    fflush(stdin);
    gets(str);
    printf("%s", str);
    for (int i=0; i<strlen(str);i++)
    {
        if(str[i] >= 'A' && str[i] <='Z')
        {
         str[i]=str[i]-'A' + 'a' ;

        }
    }
    printf("%s\n", str);
//        for (int i=0; i<strlen(str);i++)
//
//        printf("")


}
