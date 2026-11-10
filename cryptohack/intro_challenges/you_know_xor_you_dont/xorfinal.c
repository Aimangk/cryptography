#include "../hex/hex.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char lemot[] = "crypto{";
    int i = 0;
    while (lemot[i] != '\0')
    {
        printf("%x", lemot[i]);
        i++;
    }
    char lacle[] =
        "0e0b213f26041e480b26217f27342e175d0e070a3c5b103e2526217f27342e175d0e077e263451150104";
    char chiffre[] = "myXORkey";
    int n = strlen(lacle);
    char lechall[n+1];
    int lacle_out[n / 2];
    hex_to_decimal(lacle, lacle_out);

    for (int i = 0; i < n; i++)
    {
        lechall[i]=lacle_out[i] ^ chiffre[i % strlen(chiffre)];
    }
    lechall[n + 1] = '\0';
    printf("%s",lechall);
     return 0;
}
