#include "../hex/hex.h"
#include <stdio.h>
#include <string.h>

int main()
{
    char hidden_data[] = "73626960647f6b206821204f21254f7d694f7624662065622127234f726927756d";
    int len = strlen(hidden_data);
    int out[len / 2];
    hex_to_decimal(hidden_data, out);
    for (int i = 0; i <= 256; i++)
    {
        for (int j = 0; j < len / 2; j++)
        {
            printf("%c", out[j] ^ i);
        }
        printf("\n");
    }
    return 0;
}
