#include <stdio.h>
#include <string.h>

void hex_to_decimal(char *hex, int *output)
{
  int *o=output;
  int len = strlen(hex);
  int j = 0;
  for(int i=0; i < len-1; i+=2)
    {
     
     char c = hex[i];
     char c2 = hex[i+1];
     int temp1 = 0;
     int temp2 = 0;
     if(c >= '0' && c <= '9')
       {
         temp1 = (c - '0' ) * 16;
       }
     else if (c >= 'a' && c <= 'f')
       {
         temp1 = (c - 'a' + 10) * 16;
       }

     if(c2 >= '0' && c2 <= '9')
       {
         temp2 = c2 - '0' ;
       }
     else if (c2 >= 'a' && c2 <= 'f')
       {
         temp2 = c2 - 'a' + 10;
       }
     *(o+j)=temp1+temp2;
     printf("%d",temp1+temp2);
     j++;
    }
  printf("\n");
}


