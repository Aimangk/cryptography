#include "../hex/hex.h"
#include <string.h>
#include <stdio.h>



int main()
{
    char key1[]="a6c8b6733c9b22de7bc0253266a3867df55acde8635e19c73313";
    int n = strlen(key1);
    char keyA[]="37dcb292030faa90d07eec17e3b1c6d8daf94c35d4c9191a5e1e";
    char keyB[]="c1545756687e7573db23aa1c3452a098b71a7fbf0fddddde5fc1";
    char keyC[]="04ee9855208a2cd59091d04767ae47963170d1660df7f56f5faf";
    int key1_out[n/2];
    int keyA_out[n/2];
    int keyB_out[n/2];
    int keyC_out[n/2];
    int key2[n/2];
    int key3[n/2];
    int flag[n/2];

    hex_to_decimal(key1, key1_out);
    hex_to_decimal(keyA,keyA_out);
    hex_to_decimal(keyB,keyB_out);
    hex_to_decimal(keyC,keyC_out);

    for(int i=0; i<n/2; i++)
    {
        key2[i]=key1_out[i]^keyA_out[i];
    }
    for(int i=0; i<n/2; i++)
    {
        key3[i]=key2[i]^keyB_out[i];
    }
    
    for(int i=0; i<n/2; i++)
    {
        flag[i]=key3[i]^keyC_out[i]^key1_out[i]^key2[i];
        printf("%c",flag[i]);
    }
    printf("\n");


    return 0;
}