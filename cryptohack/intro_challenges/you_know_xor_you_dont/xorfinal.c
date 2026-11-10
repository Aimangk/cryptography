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
    char lacle[] = "63727970746f7b";
    char chiffre[] = "0e0b213f26041e";
    int n = strlen(lacle);
    int chiffre_out[n / 2];
    int lacle_out[n / 2];
    hex_to_decimal(lacle, lacle_out);
    hex_to_decimal(chiffre, chiffre_out);

    for (int i = 0; i < n / 2; i++)
    {
        printf("%c", chiffre_out[i] ^ lacle_out[i]);
    }
    return 0;
}
