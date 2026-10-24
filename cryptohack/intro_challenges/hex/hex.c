#include <stdio.h>
#include <string.h>

int main()
{
  char hex[] = "63727970746f7b596f755f77696c6c5f62655f776f726b696e675f776974685f6865785f737472696e67735f615f6c6f747d";
  int len = strlen(hex);

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
     printf("%c",temp1+temp2);
    }
  printf("\n");
  return 0;
}
