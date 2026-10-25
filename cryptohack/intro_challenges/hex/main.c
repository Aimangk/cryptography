#include "hex.h"
#include <string.h>


int main()
{
  char st[] = "63727970746f7b596f755f77696c6c5f62655f776f726b696e675f776974685f6865785f737472696e67735f615f6c6f747d";
  int n=strlen(st)/2;
  int out[n];
  hex_to_decimal(st,out);
  return 0;
}