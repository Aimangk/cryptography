#include <stdio.h>
#include <string.h>


int main()
{
    char text[]="label";
    int len=strlen(text);
    char out[len];
    int i=0;
    while(text[i]!='\0')
    {
        out[i]=text[i]^13;
        printf("%c",out[i]);
        i++;
    }
    printf("\n");
    return 0;
}