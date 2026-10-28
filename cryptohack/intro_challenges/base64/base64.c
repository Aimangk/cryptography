#include "../hex/hex.h"
#include <string.h>
#include <stdio.h>

int main()
{

  char st[] = "72bca9b68fc16ac7beeb8f849dca1d8a783e8acf9679bf9269f7bf";     //
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  int n=strlen(st)/2;
  
  int out[n];
  hex_to_decimal(st,out);
 /* for(int i=0; i<n; i++)
  {
    printf("%d |",out[i]);
  }
  printf("\n"); */
  unsigned char lechar;
  
  
    for(int i = 0; i<n-(n%3); i+=3)              // n-(n%3) to not be out of bounds 
    {
      lechar = out[i]>>2;
      printf("%c",alphabet[lechar]);
      lechar = ((out[i] & 3 )<<4) | (out[i+1]>>4) ;            // 3 = 00000011
      printf("%c",alphabet[lechar]);
      lechar = ((out[i+1] & 0b00001111)<<2) | (out[i+2]>>6);       // we can use 0b00001111 or 15 it is the same
      printf("%c",alphabet[lechar]);
      lechar = (out[i+2] & 0b00111111);
      printf("%c",alphabet[lechar]);

     }
  
  printf("\n");
  return 0;
}

