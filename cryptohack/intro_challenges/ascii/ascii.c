#include <stdio.h>

int main()
{
  int ords[] = {99, 114, 121, 112, 116, 111, 123, 65, 83, 67, 73, 73, 95, 112, 114, 49, 110, 116, 52, 98, 108, 51, 125};
  int size_ords = sizeof(ords)/sizeof(*ords);
  for(int i=0; i < size_ords; i++ )
    {
      printf("%c",ords[i]);
    }
  printf("\n");

  return 0;
}
